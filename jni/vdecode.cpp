#include "player.h"

static int img_convert(AVPicture *dst, int dst_pix_fmt, const AVPicture *src,
		int src_pix_fmt, int src_width, int src_height) {
	int w;
	int h;
	struct SwsContext *pSwsCtx;

	w = src_width;
	h = src_height;

	pSwsCtx = sws_getContext(w, h, (AVPixelFormat) src_pix_fmt, w, h,
			(AVPixelFormat) dst_pix_fmt, SWS_BICUBIC, NULL, NULL, NULL);
	sws_scale(pSwsCtx, (const uint8_t* const *) src->data, src->linesize, 0, h,
			dst->data, dst->linesize);

	return 0;
}


void* video_thread(void *argv) {
	AVPacket pkt1;
	AVPacket *packet = &pkt1;
	int frameFinished;
	AVFrame *pFrame;
	double pts;

	pFrame = av_frame_alloc();

	for (;;) {

		if (global_context.quit) {
			av_log(NULL, AV_LOG_ERROR, "video_thread need exit. \n");
			break;
		}

		if (global_context.pause) {
			continue;
		}

		if (packet_queue_get(&global_context.video_queue, packet) <= 0) {
			// means we quit getting packets
			continue;
		}

		avcodec_decode_video2(global_context.vcodec_ctx, pFrame, &frameFinished,
				packet);

		/*av_log(NULL, AV_LOG_ERROR,
				"packet_queue_get size is %d, format is %d\n", packet->size,
				pFrame->format);*/

		// Did we get a video frame?
		if (frameFinished) {
			AVPicture pict;
			uint8_t *dst_data[4];
			int dst_linesize[4];

			av_image_alloc(pict.data, pict.linesize,
					global_context.vcodec_ctx->width,
					global_context.vcodec_ctx->height, AV_PIX_FMT_RGB565LE, 16);

			// Convert the image into YUV format that SDL uses
			img_convert(&pict, AV_PIX_FMT_RGB565LE, (AVPicture *) pFrame,
					global_context.vcodec_ctx->pix_fmt,
					global_context.vcodec_ctx->width,
					global_context.vcodec_ctx->height);

			renderSurface(pict.data[0]);

			av_freep(&pict.data[0]);
		}

		av_packet_unref(packet);
		av_init_packet(packet);

		// about framerate
		usleep(10000);
	}

	av_free(pFrame);

	return 0;
}

