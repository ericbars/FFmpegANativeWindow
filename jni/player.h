
#ifndef __PLAYER_H__
#define __PLAYER_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <assert.h>
#include <jni.h>
#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <android/log.h>
#include <time.h>
#include <utime.h>

#include <errno.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/syscall.h>
#include <sched.h>

#include "config.h"

#include "libavutil/log.h"
#include "libavutil/time.h"
#include "libavutil/samplefmt.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
#include "libswresample/swresample.h"
#include "libavfilter/avfilter.h"
#include "libavfilter/buffersink.h"
#include "libavfilter/buffersrc.h"
#include <libavutil/imgutils.h>


#if CONFIG_AVDEVICE
#include "libavdevice/avdevice.h"
#endif
#if CONFIG_AVFILTER
#include "libavfilter/avfilter.h"
#endif

#include <android/log.h>

typedef struct PacketQueue {
    AVPacketList *first_pkt, *last_pkt;
    int nb_packets;
    int size;
    int abort_request;
    int serial;
    pthread_mutex_t *mutex;
} PacketQueue;



typedef struct GlobalContexts {
    AVCodecContext *acodec_ctx;
    AVCodecContext *vcodec_ctx;
    AVStream *vstream;
    AVStream *astream;
    AVCodec *vcodec;
    AVCodec *acodec;

    PacketQueue video_queue;

    int quit;
    int pause;
}GlobalContext;


void packet_queue_init(PacketQueue *q) ;
int packet_queue_get(PacketQueue *q, AVPacket *pkt);
int packet_queue_put(PacketQueue *q, AVPacket *pkt) ;

void* video_thread(void *argv);
void* open_media(void *argv);
int32_t setBuffersGeometry(int32_t width, int32_t height);
void renderSurface(uint8_t *pixel);

extern GlobalContext global_context;

#define TAG "FFmpeg"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, TAG, __VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /* __PLAYER_H__ */


