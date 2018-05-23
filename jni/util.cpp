#include "player.h"

void packet_queue_init(PacketQueue *q) {
	memset(q, 0, sizeof(PacketQueue));
	pthread_mutex_init(q->mutex, NULL);
}

int packet_queue_put(PacketQueue *q, AVPacket *pkt) {
	AVPacketList *pkt1;

	if ((NULL == pkt) || (NULL == q)) {
		av_log(NULL, AV_LOG_ERROR,
				"packet_queue_put failure, q or pkt is NULL. \n");
		return -1;
	}

	if (av_dup_packet(pkt) < 0) {
		av_log(NULL, AV_LOG_ERROR, "packet_queue_put av_dup_packet failure.\n");
		return -1;
	}

	pkt1 = (AVPacketList*) av_malloc(sizeof(AVPacketList));
	if (!pkt1) {
		av_log(NULL, AV_LOG_ERROR, "packet_queue_put av_malloc failure.\n");
		return -1;
	}

	pkt1->pkt = *pkt;
	pkt1->next = NULL;

	pthread_mutex_lock(q->mutex);

	if (!q->last_pkt) {
		q->first_pkt = pkt1;
	} else {
		q->last_pkt->next = pkt1;
	}

	q->last_pkt = pkt1;
	q->nb_packets++;
	q->size += pkt1->pkt.size;

	pthread_mutex_unlock(q->mutex);

	return 0;
}

int packet_queue_get(PacketQueue *q, AVPacket *pkt) {
	AVPacketList *pkt1;
	int ret;

	if (global_context.quit) {
		return -1;
	}

	pthread_mutex_lock(q->mutex);

	pkt1 = q->first_pkt;

	if (pkt1) {
		q->first_pkt = pkt1->next;

		if (!q->first_pkt) {
			q->last_pkt = NULL;
		}

		q->nb_packets--;
		q->size -= pkt1->pkt.size;
		*pkt = pkt1->pkt;
		av_free(pkt1);
		ret = 1;
	} else {
		ret = 0;
	}

	pthread_mutex_unlock(q->mutex);

	return ret;
}

int packet_queue_size(PacketQueue *q) {
	return q->size;
}

