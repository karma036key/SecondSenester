#ifndef ENEMY_H
#define ENEMY_H
#include "Base.h"
class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

private:
	// �s���Ǘ��ϐ�
	int m_Routine;

};

#endif�@// ENEMY_H