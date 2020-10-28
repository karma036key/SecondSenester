#include "EnemyManager.h"
#include "Base.h"
#include "Enemy.h"

EnemyManager::EnemyManager()
{
	m_Enemies.clear();
}

EnemyManager::~EnemyManager()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* ptr = *itr;
		delete ptr;
		*itr = nullptr;
	}
	m_Enemies.clear();
}

Base* EnemyManager::CreateEnemy(int enemy_type)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		// 
		if (*itr == nullptr)
		{
			*itr = new Enemy();
			return *itr;

		}
	}

	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}

bool EnemyManager::DestoryEnemy(Base* ptr)
{
	// ptr ‚ª nullptr ‚È‚ç‚Î return
	if (ptr == nullptr)
	{
		return false;
	}
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();
	itr != m_Enemies.end();
	++itr)
	{
		if (*itr == ptr)
		{
			delete*itr;
			*itr = nullptr;
			return true;
		}
	}
	return false;
}

void EnemyManager::Exec()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();
	itr != m_Enemies.end();
	++itr)
	{
		if (*itr != nullptr)
		{
			Base* ptr=*itr;
			ptr->Exec();
		}
	}

}

void EnemyManager::Drow()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();
		itr != m_Enemies.end();
		++itr)
	{
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
			ptr->Draw();
		}
	}
}

Base* EnemyManager::CheckHit(int x, int y, int width, int height)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();
		itr != m_Enemies.end();
		++itr)
	{
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
			if (ptr->CheckHit(x, y, width, height))
			{
				return ptr;
			}
		}
	}
	return nullptr;
}
