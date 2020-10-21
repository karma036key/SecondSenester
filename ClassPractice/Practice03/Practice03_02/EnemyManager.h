#ifndef ENEMY_MANAGER_H
#define ENEMY_MANAGER_H

#include <vector>

class EnemyManager
{
public:
	EnemyManager();
	~EnemyManager();

public:
	//
	class Base* CreateEnemy(int enemy_type);
	// 
	bool DestoryEnemy(class Base* ptr);
	// 
	void Exec();
	// 描画
	void Drow();
	// 当たり判定
	class Base* ChecHit(int x, int y, int width, int height);

private:
	// エネミー管理
	std::vector<class Base*>m_Enemies;
};

#endif	//  ENEMY_MANAGER_H