/**
*	@file	Main.cpp
*	@brief
*	@author	MASAKAZU KOTAKE
*	@date	UPDATE : 2014/12/13
*/
#include <Windows.h>
#include "Component.h"
//プロトタイプ宣言
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


/**
*	エントリーポイント
*/
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{


	return 0;
}

/**
*	ウィンドウプロシージャー
*/
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
	return 0;// Application::getInstance()->wndProc(hWnd,uMsg,wParam,lParam);
}