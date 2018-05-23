#include "com_player_ffmpeg_VideoSurface.h"
#include "player.h"

// for native window JNI
#include <android/native_window_jni.h>
#include <android/native_window.h>

static ANativeWindow* mANativeWindow;
static ANativeWindow_Buffer nwBuffer;

static jclass globalVideoSurfaceClass = NULL;
static jobject globalVideoSurfaceObject = NULL;

void renderSurface(uint8_t *pixel) {

	if (global_context.pause) {
		return;
	}

	ANativeWindow_acquire(mANativeWindow);

	if (0 != ANativeWindow_lock(mANativeWindow, &nwBuffer, NULL)) {
		LOGV("ANativeWindow_lock() error");
		return;
	}
	//LOGV("renderSurface, %d, %d, %d", nwBuffer.width ,nwBuffer.height, nwBuffer.stride);
	if (nwBuffer.width >= nwBuffer.stride) {
		//srand(time(NULL));
		//memset(piexels, rand() % 100, nwBuffer.width * nwBuffer.height * 2);
		//memcpy(nwBuffer.bits, piexels, nwBuffer.width * nwBuffer.height * 2);
		memcpy(nwBuffer.bits, pixel, nwBuffer.width * nwBuffer.height * 2);
	} else {
		LOGV("new buffer width is %d,height is %d ,stride is %d",
				nwBuffer.width, nwBuffer.height, nwBuffer.stride);
		int i;
		for (i = 0; i < nwBuffer.height; ++i) {
			memcpy((void*) ((int) nwBuffer.bits + nwBuffer.stride * i * 2),
					(void*) ((int) pixel + nwBuffer.width * i * 2),
					nwBuffer.width * 2);
		}
	}

	if (0 != ANativeWindow_unlockAndPost(mANativeWindow)) {
		LOGV("ANativeWindow_unlockAndPost error");
		return;
	}

	ANativeWindow_release(mANativeWindow);
}

// format not used now.
int32_t setBuffersGeometry(int32_t width, int32_t height) {
	int32_t format = WINDOW_FORMAT_RGB_565;

	if (NULL == mANativeWindow) {
		LOGV("mANativeWindow is NULL.");
		return -1;
	}

	return ANativeWindow_setBuffersGeometry(mANativeWindow, width, height,
			format);
}

// set the surface
/*
 * Class:     com_player_ffmpeg_VideoSurface
 * Method:    setSurface
 * Signature: (Landroid/view/Surface;)I
 */JNIEXPORT jint JNICALL Java_com_player_ffmpeg_VideoSurface_setSurface(
		JNIEnv *env, jobject obj, jobject surface) {

	pthread_t thread_1;

	//LOGV("fun env is %p", env);

	jclass localVideoSurfaceClass = env->FindClass(
			"com/player/ffmpeg/VideoSurface");
	if (NULL == localVideoSurfaceClass) {
		LOGV("FindClass VideoSurface failure.");
		return -1;
	}

	globalVideoSurfaceClass = (jclass) env->NewGlobalRef(
			localVideoSurfaceClass);
	if (NULL == globalVideoSurfaceClass) {
		LOGV("localVideoSurfaceClass to globalVideoSurfaceClass failure.");
	}

	globalVideoSurfaceObject = (jclass) env->NewGlobalRef(obj);
	if (NULL == globalVideoSurfaceObject) {
		LOGV("obj to globalVideoSurfaceObject failure.");
	}

	if (NULL == surface) {
		LOGV("surface is null, destroy?");
		mANativeWindow = NULL;
		return 0;
	}

	// obtain a native window from a Java surface
	mANativeWindow = ANativeWindow_fromSurface(env, surface);
	LOGV("mANativeWindow ok");

	pthread_create(&thread_1, NULL, open_media, NULL);

	return 0;
}

/*
 * Class:     com_player_ffmpeg_VideoSurface
 * Method:    onPause
 * Signature: ()I
 */JNIEXPORT jint JNICALL Java_com_player_ffmpeg_VideoSurface_nativePausePlayer(JNIEnv *,
		jobject) {
	global_context.pause = 1;
	return 0;
}

/*
 * Class:     com_player_ffmpeg_VideoSurface
 * Method:    onResume
 * Signature: ()I
 */JNIEXPORT jint JNICALL Java_com_player_ffmpeg_VideoSurface_nativeResumePlayer(JNIEnv *,
		jobject) {
	global_context.pause = 0;
	return 0;
}

/*
 * Class:     com_player_ffmpeg_VideoSurface
 * Method:    onDestroy
 * Signature: ()I
 */JNIEXPORT jint JNICALL Java_com_player_ffmpeg_VideoSurface_nativeStopPlayer(JNIEnv *,
		jobject) {
	global_context.quit = 1;
	return 0;
}

