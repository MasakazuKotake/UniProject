/**
*	@file	HideFlags.h
*	@brief	
*	@author	MASAKAZU KOTAKE
*	@date	UPDATE : 2014/12/13
*/
#ifndef _HIDE_FLAGS_H_
#define _HIDE_FLAGS_H_

enum HideFlags{
	None = 0,
	HideInHierarchy = 1,
	HideInInspector = 2,
	DontSave = 4,
	NotEditable = 8,
	HideAndDontSave = 13,
};

#endif
//EOF