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
	//Start�O�ɌĂ΂��
	void awake();

	//�I�u�W�F�N�g�̗L��������ɌĂ΂��
	void onEnable();

	//�ŏ��̃t���[���̃A�b�v�f�[�g�O�ɌĂ΂��
	void start();

	//�t���[���̏I���Ƀ|�[�Y�����m���ꂽ�Ƃ��ɌĂ΂��
	void onApplicationPause();

	//�I�u�W�F�N�g�j�����ɌĂ΂��
	void onDestroy();

	//�A�v���P�[�V�����I���O�ɌĂ΂��
	void onApplicationQuit();

	//���삪�����ɂȂ�^�C�~���O
	void onDisable();

	//�M���ł���^�C�}�[����Ăяo�����
	void fixedUpdate();

	//���t���[���Ă΂��
	void update();

	//upsate��ɌĂ΂��
	void lateUpdate();

	//�J�������J�����O���s���O�ɌĂ΂��
	void onPreCull();

	//�I�u�W�F�N�g���J�����ɑ΂��ĕ\�������Ƃ��ɌĂ΂��
	void onBecameVisible();

	//�I�u�W�F�N�g���J�����ɑ΂��Ĕ�\���ɂȂ�ۂɌĂ΂��
	void onBecameInvisible();

	//�I�u�W�F�N�g���\�������ہA�e�J�����ɑ΂��Ĉ�񂸂Ă΂��
	void onWillRenderObject();

	//�J�������V�[���̃����_�����O���J�n����O�ɌĂ΂��
	void onPreRender();

	//�S�ẴV�[�������_�����O�I����ɌĂ΂��
	void onRenderObject();

	//�J�������V�[���̃����_�����O���I��������ɌĂ΂��
	void onPostRender();
	
	//��ʃ����_�����O����������ʉ摜�̏������\�ɂȂ�����ɌĂ΂��
	void onRenderImage();

	//�C�x���g�ɉ����ăt���[�����Ƃɕ�����
	void onGUI();

	//�����̂��߂̃V�[���r���[���ł̃M�Y���̕`��
	void onDrawGizmos();

};

#endif
//EOF