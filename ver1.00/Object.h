/**
*	@file	Object.h
*	@brief
*	@author	MASAKAZU KOTAKE
*	@date	UPDATE : 2014/12/13
*/
#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "HideFlags.h"
#include "Type.h"
#include "LinkList.h"

class Object : public LinkList<Object>{

	/*
	static bool operator != (Object x, Object y);
	static bool operator == (Object x, Object y);
	virtual bool equals(Object o);
	//static bool operator bool(Object exists);

	HideFlags	hideFlags;	//オブジェクトがインスペクタから見れるかどうか
	HideFlags	hideFlags();
	void		hideFlags(HideFlags hideFlags);
	
	tstring name;			//オブジェクトの名前
	tstring name();
	void	name(tstring name);

	//コンストラクタ

	//デストラクタ

	//ゲームオブジェクトやコンポーネントを消去する
	static void destroy(Object obj);
	static void destroy(Object obj, float t);
	static void destroyObject(Object obj);
	static void destroyObject(Object obj, float t);
	
	//すぐにオブジェクトを破壊する。だが、Destroy関数の方推奨
	static void destroyImmediate(Object obj);
	static void DestroyImmediate(Object obj, bool allowDestroyingAssets);

	//新しいシーンを読み込んでも破壊されないように設定する
	static void dontDestroyOnLoad(Object target);

	
	//指定した型であるオブジェクトで最初に見つかった有効なものを返す

	//オリジナルを複製したうえで返り値として変えす

	*/

};


#endif
//EOF