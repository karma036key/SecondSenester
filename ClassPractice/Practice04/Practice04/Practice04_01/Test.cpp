#include "stdio.h"
#include "Test.h"

// static メンバ変数 書き方(定義)
// 型名 クラス名::変数名 (= 初期値)
// 注 : static メンバ変数 は宣言と実体を分けて作る
//		実体を作るのは・・必ず！ .cpp
int Test::staticValue = 0;
int Test::instanceCount = 0;
Test::Test()
{
	value = 0;
	instanceCount++;
}

Test::~Test()
{
	value = 0;
	instanceCount--;
}

void Test::SetValue(int value_)
{
	value = value_;
}

int Test::GetValue()
{
	return value;
}

void Test::PrintValue()
{
	printf(" value	     = %d\n", value);
	printf(" staticValue = %d\n", staticValue);
}

// staticメンバ関数 書き方(定義)
//  戻り値 関数名(引数)
void Test::SetStaticValue(int value_)
{
	staticValue = value_;
	
	// 注 : static メンバ関数では、
	//	static のメンバー変数しか操作できない
	// value = value_	// error!
}

void Test::PrintCount()
{
	printf("Insetance Count = %d\n", instanceCount);
}
