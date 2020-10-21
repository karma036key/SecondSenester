#include "Common.h"
#include "Enemy.h"

Enemy::Enemy()
{
	m_Routine = 0;
	printf("Enemy : コンストラクター\n");
}
Enemy::~Enemy()
{
	printf("Enemy : デストラクター\n");
}

void Enemy::Exec()
{

}
void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("Enemy:当たりませんでした\n");
	return false;
}

