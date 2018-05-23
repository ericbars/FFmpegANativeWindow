package com.player.ffmpeg;

import android.os.Bundle;
import android.app.Activity;
import android.view.Window;
import android.view.WindowManager;
import android.widget.RelativeLayout;

public class MainActivity extends Activity {
	// private static final String TAG = "MainActivity";
	private VideoSurface mVideoSurface;
	private RelativeLayout mRootView;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		// hide stauts bar
		this.getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
				WindowManager.LayoutParams.FLAG_FULLSCREEN);
		requestWindowFeature(Window.FEATURE_NO_TITLE);

		setContentView(R.layout.activity_main);

		mRootView = (RelativeLayout) findViewById(R.id.video_surface_layout);

		// creat surfaceview
		mVideoSurface = new VideoSurface(this);
		mRootView.addView(mVideoSurface);
	}

	@Override
	protected void onPause() {
		super.onPause();
		mVideoSurface.pausePlayer();
	}

	@Override
	protected void onResume() {
		super.onResume();
		mVideoSurface.resumePlayer();
	}

	@Override
	protected void onDestroy() {
		super.onDestroy();
		mVideoSurface.stopPlayer();
	}
}
