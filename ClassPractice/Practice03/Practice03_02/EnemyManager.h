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
	// �`��
	void Drow();
	// �����蔻��
	class Base* ChecHit(int x, int y, int width, int height);

private:
	// �G�l�~�[�Ǘ�
	std::vector<class Base*>m_Enemies;
};

#endif	//  ENEMY_MANAGER_H