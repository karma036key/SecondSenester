#include "Common.h"
#include <string>
#include "Player.h"
#include "Enemy.h"

void PrintStatus(std::string name, Base* terget);

int main()
{
	Player player;
	player.SetMoveSpeed(10.0f);


	Enemy enemy;
	enemy.SetMoveSpeed(5.0f);
	enemy.SetHp(1);

	Base* pBase = nullptr;

	printf("-------------\n");
	printf("PRACTICE02_04\n");
	printf("-------------\n");

	pBase = &player;
	 PrintStatus("player", pBase);

	pBase = &enemy;
	 PrintStatus("Enemy", pBase);

	system("pause");
	return 0;
}

void PrintStatus(std::string name, Base* terget)
{
	if (terget == nullptr)
	{
		return;
	}


	printf("|%s Status\n", name.c_str());
	printf("|hp = %d\n", terget->GetHp());
	printf("|PosX = %0.2f\n", terget->GetPosX());
	printf("|PosY = %0.2f\n", terget->GetPosY());
	printf("|MoveSpeed = %0.2f\n", terget->GetMoveSpeed());
	printf("\n\n");

}
