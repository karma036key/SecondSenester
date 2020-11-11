
#include <iostream>
#include "Enemy00.h"
#include "Enemy01.h"

int main()
{
	// statick_cast			( 暗黙的型変換を明示的に行う )
	
		// statick_cast < 変化後の型 >( 変数 )
		double PI = 3.1415826535;
		int iPI1 = PI;	// 暗黙的変換でエラーなし　警告：C4244
		int iPI2 = static_cast <int>(PI);	// C++的な　書き方(丁寧)
		int iPI3 = int(PI);					// C++的な　書き方
		int iPI4 = (int)PI;					// C言語的な書き方
	

	// dynamic_cast			(ダウンキャストする際、厳密にチェックする方法)
	
		//		ダウンキャスト = クラスを 基底 から 派生 にする
		// dynamic_cast < 変化後の型 >( 変数 )
		Enemy01 enemy01;
		CharacterBase* pBase = &enemy01;	// 基底のポインタ変数へ、派生のアドレス代入
	    //Enemy00* pEnemy00    = pBase;		// 派生のポインタ変数へ、基底のアドレス代入(error!!)
		Enemy00* pEnemy00 = dynamic_cast <Enemy00*>(pBase);	// 変換不可　＝＞　NULL
		Enemy01* pEnemy01 = dynamic_cast <Enemy01*>(pBase);
	

	// reinterpret_cast		(ポインタ型を別のポインタ型へ　強制変換)
	
		int j = 0;
		//	char* c = &j;	// 違う型	error!
		char* c = reinterpret_cast <char*>(&j);	// int* を char* へ強制変換
		c[0] = 1;
		c[1] = 1;
		std::cout << "j : " << j << std::endl;

		// 危険なキャスト(Enemy00 は Enemy01 のアドレスではない)
		Enemy00 enemy00;
		Enemy01* pEnemy01 = reinterpret_cast <Enemy01*>(& enemy00);
		//pEnemy01->SetVarietion(10);		//
		//pEnemy01->SetRoutine(5);

		// 
		switch (pBase->GetEnemyType())
		{
		case EnemyType_Zako00:
			pEnemy00 = reinterpret_cast <Enemy00*>(pBase);
			break;
		case EnemyType_Zako01:
			pEnemy01 = reinterpret_cast <Enemy01*>(pBase);
			break;
		default:
			break;
		}
	
	//const_cast			(普段は使わない　 constを明示的に外す)
		const int iConst = 100;
		//iConst = 200;				// 
		//int* pNonConst = &iConst;	// 
		int* pNonConst = const_cast <int*>(&iConst);

		// 
		*pNonConst = 200;
		std::cout << "iConst : " << iConst << std::endl;

		//pNonConst = const_cast <int*>(&iConst);
		//



	return 0;
}

