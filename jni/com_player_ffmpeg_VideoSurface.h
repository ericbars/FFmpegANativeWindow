/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_player_ffmpeg_VideoSurface */

#ifndef _Included_com_player_ffmpeg_VideoSurface
#define _Included_com_player_ffmpeg_VideoSurface
#ifdef __cplusplus
extern "C" {
#endif
#undef com_player_ffmpeg_VideoSurface_NO_ID
#define com_player_ffmpeg_VideoSurface_NO_ID -1L
#undef com_player_ffmpeg_VideoSurface_VISIBLE
#define com_player_ffmpeg_VideoSurface_VISIBLE 0L
#undef com_player_ffmpeg_VideoSurface_INVISIBLE
#define com_player_ffmpeg_VideoSurface_INVISIBLE 4L
#undef com_player_ffmpeg_VideoSurface_GONE
#define com_player_ffmpeg_VideoSurface_GONE 8L
#undef com_player_ffmpeg_VideoSurface_DRAWING_CACHE_QUALITY_LOW
#define com_player_ffmpeg_VideoSurface_DRAWING_CACHE_QUALITY_LOW 524288L
#undef com_player_ffmpeg_VideoSurface_DRAWING_CACHE_QUALITY_HIGH
#define com_player_ffmpeg_VideoSurface_DRAWING_CACHE_QUALITY_HIGH 1048576L
#undef com_player_ffmpeg_VideoSurface_DRAWING_CACHE_QUALITY_AUTO
#define com_player_ffmpeg_VideoSurface_DRAWING_CACHE_QUALITY_AUTO 0L
#undef com_player_ffmpeg_VideoSurface_SCROLLBARS_INSIDE_OVERLAY
#define com_player_ffmpeg_VideoSurface_SCROLLBARS_INSIDE_OVERLAY 0L
#undef com_player_ffmpeg_VideoSurface_SCROLLBARS_INSIDE_INSET
#define com_player_ffmpeg_VideoSurface_SCROLLBARS_INSIDE_INSET 16777216L
#undef com_player_ffmpeg_VideoSurface_SCROLLBARS_OUTSIDE_OVERLAY
#define com_player_ffmpeg_VideoSurface_SCROLLBARS_OUTSIDE_OVERLAY 33554432L
#undef com_player_ffmpeg_VideoSurface_SCROLLBARS_OUTSIDE_INSET
#define com_player_ffmpeg_VideoSurface_SCROLLBARS_OUTSIDE_INSET 50331648L
#undef com_player_ffmpeg_VideoSurface_KEEP_SCREEN_ON
#define com_player_ffmpeg_VideoSurface_KEEP_SCREEN_ON 67108864L
#undef com_player_ffmpeg_VideoSurface_SOUND_EFFECTS_ENABLED
#define com_player_ffmpeg_VideoSurface_SOUND_EFFECTS_ENABLED 134217728L
#undef com_player_ffmpeg_VideoSurface_HAPTIC_FEEDBACK_ENABLED
#define com_player_ffmpeg_VideoSurface_HAPTIC_FEEDBACK_ENABLED 268435456L
#undef com_player_ffmpeg_VideoSurface_FOCUSABLES_ALL
#define com_player_ffmpeg_VideoSurface_FOCUSABLES_ALL 0L
#undef com_player_ffmpeg_VideoSurface_FOCUSABLES_TOUCH_MODE
#define com_player_ffmpeg_VideoSurface_FOCUSABLES_TOUCH_MODE 1L
#undef com_player_ffmpeg_VideoSurface_FOCUS_BACKWARD
#define com_player_ffmpeg_VideoSurface_FOCUS_BACKWARD 1L
#undef com_player_ffmpeg_VideoSurface_FOCUS_FORWARD
#define com_player_ffmpeg_VideoSurface_FOCUS_FORWARD 2L
#undef com_player_ffmpeg_VideoSurface_FOCUS_LEFT
#define com_player_ffmpeg_VideoSurface_FOCUS_LEFT 17L
#undef com_player_ffmpeg_VideoSurface_FOCUS_UP
#define com_player_ffmpeg_VideoSurface_FOCUS_UP 33L
#undef com_player_ffmpeg_VideoSurface_FOCUS_RIGHT
#define com_player_ffmpeg_VideoSurface_FOCUS_RIGHT 66L
#undef com_player_ffmpeg_VideoSurface_FOCUS_DOWN
#define com_player_ffmpeg_VideoSurface_FOCUS_DOWN 130L
#undef com_player_ffmpeg_VideoSurface_MEASURED_SIZE_MASK
#define com_player_ffmpeg_VideoSurface_MEASURED_SIZE_MASK 16777215L
#undef com_player_ffmpeg_VideoSurface_MEASURED_STATE_MASK
#define com_player_ffmpeg_VideoSurface_MEASURED_STATE_MASK -16777216L
#undef com_player_ffmpeg_VideoSurface_MEASURED_HEIGHT_STATE_SHIFT
#define com_player_ffmpeg_VideoSurface_MEASURED_HEIGHT_STATE_SHIFT 16L
#undef com_player_ffmpeg_VideoSurface_MEASURED_STATE_TOO_SMALL
#define com_player_ffmpeg_VideoSurface_MEASURED_STATE_TOO_SMALL 16777216L
#undef com_player_ffmpeg_VideoSurface_LAYOUT_DIRECTION_LTR
#define com_player_ffmpeg_VideoSurface_LAYOUT_DIRECTION_LTR 0L
#undef com_player_ffmpeg_VideoSurface_LAYOUT_DIRECTION_RTL
#define com_player_ffmpeg_VideoSurface_LAYOUT_DIRECTION_RTL 1L
#undef com_player_ffmpeg_VideoSurface_LAYOUT_DIRECTION_INHERIT
#define com_player_ffmpeg_VideoSurface_LAYOUT_DIRECTION_INHERIT 2L
#undef com_player_ffmpeg_VideoSurface_LAYOUT_DIRECTION_LOCALE
#define com_player_ffmpeg_VideoSurface_LAYOUT_DIRECTION_LOCALE 3L
#undef com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_INHERIT
#define com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_INHERIT 0L
#undef com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_FIRST_STRONG
#define com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_FIRST_STRONG 1L
#undef com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_ANY_RTL
#define com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_ANY_RTL 2L
#undef com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_LTR
#define com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_LTR 3L
#undef com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_RTL
#define com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_RTL 4L
#undef com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_LOCALE
#define com_player_ffmpeg_VideoSurface_TEXT_DIRECTION_LOCALE 5L
#undef com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_INHERIT
#define com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_INHERIT 0L
#undef com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_GRAVITY
#define com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_GRAVITY 1L
#undef com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_TEXT_START
#define com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_TEXT_START 2L
#undef com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_TEXT_END
#define com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_TEXT_END 3L
#undef com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_CENTER
#define com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_CENTER 4L
#undef com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_VIEW_START
#define com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_VIEW_START 5L
#undef com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_VIEW_END
#define com_player_ffmpeg_VideoSurface_TEXT_ALIGNMENT_VIEW_END 6L
#undef com_player_ffmpeg_VideoSurface_IMPORTANT_FOR_ACCESSIBILITY_AUTO
#define com_player_ffmpeg_VideoSurface_IMPORTANT_FOR_ACCESSIBILITY_AUTO 0L
#undef com_player_ffmpeg_VideoSurface_IMPORTANT_FOR_ACCESSIBILITY_YES
#define com_player_ffmpeg_VideoSurface_IMPORTANT_FOR_ACCESSIBILITY_YES 1L
#undef com_player_ffmpeg_VideoSurface_IMPORTANT_FOR_ACCESSIBILITY_NO
#define com_player_ffmpeg_VideoSurface_IMPORTANT_FOR_ACCESSIBILITY_NO 2L
#undef com_player_ffmpeg_VideoSurface_IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS
#define com_player_ffmpeg_VideoSurface_IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS 4L
#undef com_player_ffmpeg_VideoSurface_ACCESSIBILITY_LIVE_REGION_NONE
#define com_player_ffmpeg_VideoSurface_ACCESSIBILITY_LIVE_REGION_NONE 0L
#undef com_player_ffmpeg_VideoSurface_ACCESSIBILITY_LIVE_REGION_POLITE
#define com_player_ffmpeg_VideoSurface_ACCESSIBILITY_LIVE_REGION_POLITE 1L
#undef com_player_ffmpeg_VideoSurface_ACCESSIBILITY_LIVE_REGION_ASSERTIVE
#define com_player_ffmpeg_VideoSurface_ACCESSIBILITY_LIVE_REGION_ASSERTIVE 2L
#undef com_player_ffmpeg_VideoSurface_OVER_SCROLL_ALWAYS
#define com_player_ffmpeg_VideoSurface_OVER_SCROLL_ALWAYS 0L
#undef com_player_ffmpeg_VideoSurface_OVER_SCROLL_IF_CONTENT_SCROLLS
#define com_player_ffmpeg_VideoSurface_OVER_SCROLL_IF_CONTENT_SCROLLS 1L
#undef com_player_ffmpeg_VideoSurface_OVER_SCROLL_NEVER
#define com_player_ffmpeg_VideoSurface_OVER_SCROLL_NEVER 2L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_VISIBLE
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_VISIBLE 0L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_LOW_PROFILE
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_LOW_PROFILE 1L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_HIDE_NAVIGATION
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_HIDE_NAVIGATION 2L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_FULLSCREEN
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_FULLSCREEN 4L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_LAYOUT_STABLE
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_LAYOUT_STABLE 256L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION 512L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN 1024L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_IMMERSIVE
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_IMMERSIVE 2048L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_IMMERSIVE_STICKY
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_FLAG_IMMERSIVE_STICKY 4096L
#undef com_player_ffmpeg_VideoSurface_STATUS_BAR_HIDDEN
#define com_player_ffmpeg_VideoSurface_STATUS_BAR_HIDDEN 1L
#undef com_player_ffmpeg_VideoSurface_STATUS_BAR_VISIBLE
#define com_player_ffmpeg_VideoSurface_STATUS_BAR_VISIBLE 0L
#undef com_player_ffmpeg_VideoSurface_SYSTEM_UI_LAYOUT_FLAGS
#define com_player_ffmpeg_VideoSurface_SYSTEM_UI_LAYOUT_FLAGS 1536L
#undef com_player_ffmpeg_VideoSurface_FIND_VIEWS_WITH_TEXT
#define com_player_ffmpeg_VideoSurface_FIND_VIEWS_WITH_TEXT 1L
#undef com_player_ffmpeg_VideoSurface_FIND_VIEWS_WITH_CONTENT_DESCRIPTION
#define com_player_ffmpeg_VideoSurface_FIND_VIEWS_WITH_CONTENT_DESCRIPTION 2L
#undef com_player_ffmpeg_VideoSurface_SCREEN_STATE_OFF
#define com_player_ffmpeg_VideoSurface_SCREEN_STATE_OFF 0L
#undef com_player_ffmpeg_VideoSurface_SCREEN_STATE_ON
#define com_player_ffmpeg_VideoSurface_SCREEN_STATE_ON 1L
#undef com_player_ffmpeg_VideoSurface_SCROLLBAR_POSITION_DEFAULT
#define com_player_ffmpeg_VideoSurface_SCROLLBAR_POSITION_DEFAULT 0L
#undef com_player_ffmpeg_VideoSurface_SCROLLBAR_POSITION_LEFT
#define com_player_ffmpeg_VideoSurface_SCROLLBAR_POSITION_LEFT 1L
#undef com_player_ffmpeg_VideoSurface_SCROLLBAR_POSITION_RIGHT
#define com_player_ffmpeg_VideoSurface_SCROLLBAR_POSITION_RIGHT 2L
#undef com_player_ffmpeg_VideoSurface_LAYER_TYPE_NONE
#define com_player_ffmpeg_VideoSurface_LAYER_TYPE_NONE 0L
#undef com_player_ffmpeg_VideoSurface_LAYER_TYPE_SOFTWARE
#define com_player_ffmpeg_VideoSurface_LAYER_TYPE_SOFTWARE 1L
#undef com_player_ffmpeg_VideoSurface_LAYER_TYPE_HARDWARE
#define com_player_ffmpeg_VideoSurface_LAYER_TYPE_HARDWARE 2L
/*
 * Class:     com_player_ffmpeg_VideoSurface
 * Method:    setSurface
 * Signature: (Landroid/view/Surface;)I
 */
JNIEXPORT jint JNICALL Java_com_player_ffmpeg_VideoSurface_setSurface
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_player_ffmpeg_VideoSurface
 * Method:    nativePausePlayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_player_ffmpeg_VideoSurface_nativePausePlayer
  (JNIEnv *, jobject);

/*
 * Class:     com_player_ffmpeg_VideoSurface
 * Method:    nativeResumePlayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_player_ffmpeg_VideoSurface_nativeResumePlayer
  (JNIEnv *, jobject);

/*
 * Class:     com_player_ffmpeg_VideoSurface
 * Method:    nativeStopPlayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_player_ffmpeg_VideoSurface_nativeStopPlayer
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
