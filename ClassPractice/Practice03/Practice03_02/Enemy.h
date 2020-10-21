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

	bool CheckHit(int x, int y, int width, int height);

private:
	// s“®ŠÇ—•Ï”
	int m_Routine;

};

#endif