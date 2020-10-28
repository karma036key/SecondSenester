

#include <iostream>

class CharaBase
{
public:
	CharaBase();
	CharaBase(int hp, int mp);
	virtual ~CharaBase();

	void PrintParam();

private:
	int Hp;
	int Mp;

	const int Hp_MAX;
};

// コンストラクタで、イニシャライズによる初期化のやりかた
// クラス名::コンストラクタ(引数) : メンバ変数(初期化),メンバ変数(初期化),～,メンバ変数(初期化)
// 注 : イニシャライズは　宣言順に呼び出される
//		書いた順ではない　<- これ注意
CharaBase::CharaBase()
	:Hp(50)
	,Mp(10)
	,Hp_MAX(999)	// const もここでなら初期化 可
{
	//Hp = 50;  //従来のやり方
	//Mp = 10;
	//Hp_MAX =999;	//コンストラクタではconst型メンバ変数は初期化 不可
}

// 引数付きVer でも 可
CharaBase::CharaBase(int hp, int mp):
	Hp(hp),
	Mp(mp),
	Hp_MAX(999)
{
	//Hp = hp;
	//Mp = mp;
}
CharaBase::~CharaBase()
{

}

void CharaBase::PrintParam()
{
	printf("Hp = %d\n",Hp);
	printf("Mp = %d\n",Mp);
	printf("\n");
	printf("HP_MAX = %d\n", Hp_MAX);


}

class Player : public CharaBase
{
public:
	Player();

public:
	int Money;
};
// 補足 : 引数無しのコンストラクタは省略 可
//		メンバイニシャライズは、基底クラスのコンストラクタを先に呼び出す
Player::Player()
	//:CharaBase(200,30)
	//,Money(50)
{

}

int main()
{
	int value(10);
	float f_value(10.0f);

	CharaBase ch;
	ch.PrintParam();
	return 0;
}

