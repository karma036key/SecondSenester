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
	// 行動管理変数
	int m_Routine;

};

#endif　// ENEMY_H