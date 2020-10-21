#include "Common.h"
#include "Player.h"
#include "Enemy.h"

int main()
{
    Player player;
    player.SetMoveSpeed(10.0f);
	

    Enemy enemy;
	enemy.SetMoveSpeed(5.0f);
	enemy.SetHp(1);

	printf("-------------\n");
	printf("PRACTICE02_04\n");
	printf("-------------\n");

	printf("|Player Status\n");
	printf("|hp = %d\n", player.GetHp());
	printf("|PosX = %0.2f\n", player.GetPosX());
	printf("|PosY = %0.2f\n", player.GetPosY());
	printf("|MoveSpeed = %0.2f\n", player.GetMoveSpeed());
	printf("\n\n");

	printf("================\n");
	printf("|Enemy Status\n");
	printf("|hp = %d\n", enemy.GetHp());
	printf("|PosX = %0.2f\n", enemy.GetPosX());
	printf("|PosY = %0.2f\n", enemy.GetPosY());
	printf("|MoveSpeed = %0.2f\n", enemy.GetMoveSpeed());
	printf("\n");


    system("pause");
    return 0;
}

