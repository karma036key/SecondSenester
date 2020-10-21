#include "Common.h"
#include <string>
#include "Player.h"
#include "Enemy.h"

void PrintStatus(std::string name, Base* terget);

int main()
{

	//Player player;
	//player.SetMoveSpeed(10.0f);
	Base* player = new Player();
	player->SetMoveSpeed(10.0f);

	//Enemy enemy;
	//enemy.SetMoveSpeed(5.0f);
	//enemy.SetHp(1);
	Base* enemy = new Enemy();
	enemy->SetHp(1);

	Base* pBase[] =
	{
		player,
		enemy
	};
	std::string name[]=
	{
		"Player",
		"Enemy"
	};

	printf("-------------\n");
	printf("PRACTICE02_04\n");
	printf("-------------\n");

	for (int i = 0; i < 2; i++)
	{
		pBase[i]->Exec();
		pBase[i]->Draw();
		pBase[i]->CheckHit(10, 10, 20, 30);
		PrintStatus(name[i].c_str(), pBase[i]);
	}

	delete player;
	player = nullptr;

	delete enemy;
	enemy = nullptr;

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
