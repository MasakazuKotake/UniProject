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

	HideFlags	hideFlags;	//�I�u�W�F�N�g���C���X�y�N�^���猩��邩�ǂ���
	HideFlags	hideFlags();
	void		hideFlags(HideFlags hideFlags);
	
	tstring name;			//�I�u�W�F�N�g�̖��O
	tstring name();
	void	name(tstring name);

	//�R���X�g���N�^

	//�f�X�g���N�^

	//�Q�[���I�u�W�F�N�g��R���|�[�l���g����������
	static void destroy(Object obj);
	static void destroy(Object obj, float t);
	static void destroyObject(Object obj);
	static void destroyObject(Object obj, float t);
	
	//�����ɃI�u�W�F�N�g��j�󂷂�B�����ADestroy�֐��̕�����
	static void destroyImmediate(Object obj);
	static void DestroyImmediate(Object obj, bool allowDestroyingAssets);

	//�V�����V�[����ǂݍ���ł��j�󂳂�Ȃ��悤�ɐݒ肷��
	static void dontDestroyOnLoad(Object target);

	
	//�w�肵���^�ł���I�u�W�F�N�g�ōŏ��Ɍ��������L���Ȃ��̂�Ԃ�

	//�I���W�i���𕡐����������ŕԂ�l�Ƃ��ĕς���

	*/

};


#endif
//EOF