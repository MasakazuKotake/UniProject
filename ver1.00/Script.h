/**
*	@file	HideFlags.h
*	@brief	
*	@author	MASAKAZU KOTAKE
*	@date	UPDATE : 2014/12/13
*/
#ifndef _SCRIPT_H_
#define _SCRIPT_H_

class Script{

	tstring _script;

public:
	//Start前に呼ばれる
	void awake();

	//オブジェクトの有効化直後に呼ばれる
	void onEnable();

	//最初のフレームのアップデート前に呼ばれる
	void start();

	//フレームの終わりにポーズが検知されたときに呼ばれる
	void onApplicationPause();

	//オブジェクト破棄時に呼ばれる
	void onDestroy();

	//アプリケーション終了前に呼ばれる
	void onApplicationQuit();

	//動作が無効になるタイミング
	void onDisable();

	//信頼できるタイマーから呼び出される
	void fixedUpdate();

	//毎フレーム呼ばれる
	void update();

	//upsate後に呼ばれる
	void lateUpdate();

	//カメラがカリングを行う前に呼ばれる
	void onPreCull();

	//オブジェクトがカメラに対して表示されるときに呼ばれる
	void onBecameVisible();

	//オブジェクトがカメラに対して非表示になる際に呼ばれる
	void onBecameInvisible();

	//オブジェクトが表示される際、各カメラに対して一回ずつ呼ばれる
	void onWillRenderObject();

	//カメラがシーンのレンダリングを開始する前に呼ばれる
	void onPreRender();

	//全てのシーンレンダリング終了後に呼ばれる
	void onRenderObject();

	//カメラがシーンのレンダリングを終了した後に呼ばれる
	void onPostRender();
	
	//画面レンダリングが完了し画面画像の処理が可能になった後に呼ばれる
	void onRenderImage();

	//イベントに応じてフレームごとに複数回
	void onGUI();

	//可視化のためのシーンビュー内でのギズモの描画
	void onDrawGizmos();

};

#endif
//EOF