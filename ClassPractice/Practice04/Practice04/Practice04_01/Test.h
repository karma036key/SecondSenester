#ifndef TEST_H
#define TEST_H

class Test
{
public:
	Test();
	~Test();

	void SetValue(int value_);
	int GetValue();
	void PrintValue();

	// staticメンバ関数 書き方(宣言)
	// staric 戻り値 関数名(引数)
	static void SetStaticValue(int value_);

	// Testクラスを使っている実体の表示
	static void PrintCount();

public:
	int value;

	// static メンバ変数 書き方(宣言)
	// static 型名 変数名
	static int staticValue;

	static int instanceCount;
};

#endif
