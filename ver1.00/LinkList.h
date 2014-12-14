/**
*	@file	LinkList.h
*	@brief
*	@author MASAKAZU KOTAKE
*	@date	UPDATE : 2014/06/10
*/

#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_

/**
*	�C���N���[�h
*/
//#include "DebugProc.h"

#include <crtdbg.h>
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
/**
*	�N���X�錾
*/
template <typename T>
class LinkList{
public:
	/**
	*	�R���X�g���N�^
	*/
	LinkList() :
						  m_debug(DebugProc::getInstance()),
						  m_deleteFlag(false),
						  m_static(false),
						  m_initialized(false){
		if(m_topLink == NULL){
			m_topLink = (T*)this;
		}
		if(m_curLink == NULL){
			m_curLink = (T*)this;
		}
		m_curLink->m_next = (T*)this;
		if(m_curLink == (T*)this){
			m_prev = NULL;
		}else{
			m_prev = m_curLink;
		}
		m_curLink = (T*)this;
		m_next = NULL;
	}

	/**
	*	�f�X�g���N�^
	*/
	virtual ~LinkList(){
		kill();
	}

	/**
	*	���g���E���֐�
	*/
	virtual void kill(){
		T *scene = m_topLink;
		while(scene == this){
			T *next = scene->m_next;
			if(scene == this){
				if(scene->m_prev != NULL)
					scene->m_prev->m_next = scene->m_next;
				if(scene->m_next != NULL)
					scene->m_next->m_prev = scene->m_prev;
				if(scene == m_topLink)
					m_topLink = next;
				if(scene == m_curLink)
					m_curLink = scene->m_prev;
				//if(!m_static)
					//delete scene;
				scene->dead();
			}
			scene = next;
		}
	}

	/**
	*	�S�ẴI�u�W�F�N�g�̉������
	*/
	static void releaseAll(){
		T *t = m_topLink;
		while(t){
			T *next = t->m_next;
			if(t != NULL){
				if(t->m_prev != NULL)
					t->m_prev->m_next = t->m_next;
				if(t->m_next != NULL)
					t->m_next->m_prev = t->m_prev;
				if(t == m_topLink)
					m_topLink = next;
				if(t == m_curLink)
					m_curLink = t->m_prev;
				//t->release();
				t->dead();
			}
			t = next;
		}
	}

	virtual void release() = 0;
	

protected:

	//LinkList() : m_deleteFlag(false),m_static(false){}

	static T*	m_topLink;
	static T*	m_curLink;

	T*			m_next;
	T*			m_prev;
	bool		m_deleteFlag;
	bool		m_static;
	//DebugProc*	m_debug;
	bool		m_initialized;

	/**
	*	�C���X�^���X������
	*/
	void dead(){
		if(!m_static)
			delete this;
	}
};

#define SAFE_LINK_RELEASE(p){ if(p){ p->kill(); p = NULL;}}


#endif


//EOF