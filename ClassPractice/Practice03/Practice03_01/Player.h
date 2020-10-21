#ifndef PLAYER_H
#define PLAYER_H

#include "Base.h"

class Player : public Base
{
public:
	Player();
	~Player();

public:
	void Exec();
	void Draw();

};

#endif