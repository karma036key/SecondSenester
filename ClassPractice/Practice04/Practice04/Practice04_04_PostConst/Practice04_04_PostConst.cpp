
#include <iostream>

// 
// 
class Test
{
public:
	void SetValue(int value);
	int GetValue()const;

public:
	int Value;
};


void Test::SetValue(int value)
{
	Value = value;
}

// 
int Test::GetValue()const
{
	// 注 : constメンバ関数の中では、メンバ変数に対する値の代入を行えない
	//		また内部のメンバ変数への代入操作を行はない確証になろ
	return Value;
}


int main()
{
	Test test;
	test.SetValue(1000);
	int ans = test.GetValue();

	// データが欲しいだけの時・・
	// ポインタ変数のアドレス先に変更を加えないことを保証する
	// const ポインタ変数を使うことが一般
	const Test* pTest = &test;
//	pTest->GetValue(10);
	pTest->GetValue();

	return 0;
}

