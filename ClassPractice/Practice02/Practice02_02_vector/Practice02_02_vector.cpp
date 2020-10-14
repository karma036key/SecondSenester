
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	//std::vector<int> v1;				// 配列の要素数０
	//std::vector<int> v1 = {0,1,2};	// 要素3、0,1,2
	//std::vector<int> v1{0,1,2};		// 要素3、0,1,2
	//std::vector<int> v1(6, -1);		// 要素6、すべて-1で初期化
	std::vector<int> v1(8);				// 要素8、すべてを０で初期化
	std::vector<int> v2 = v1;			// v2 を v1 の内容で初期化

	// 値の代入
	v1[0] = 10;


	// 配列のサイズを確認 .size()
	int size = v1.size();
	std::cout << size << std::endl;

	for (int i = 0; i<v1.size(); i++)
	{
		v1[i] = rand();
		printf(" v1[%d] = %d\n", i, v1[i]);
	}
	printf("\n");

	// 要素の追加 .push_back() .insert()
	v1.push_back(10);
	v1.insert(v1.begin() + 1, 100);

	for (int i = 0; i < v1.size(); i++)
	{
		printf(" v1[%d] = %d\n", i, v1[i]);
	}
	printf("\n");

	// 要素の削除 .pop_back() .erase()
	v1.pop_back();			// 末尾の要素を削除
	v1.erase(v1.begin());	// 要素の先頭を削除

	for (int i = 0; i < v1.size(); i++)
	{
		printf(" v1[%d] = %d\n", i, v1[i]);
	}
	printf("\n");

	// 全要素の削除 .clear()
	v1.clear();
	printf(" v1 size = %d\n", v1.size());

	// 要素が0かを調べる .empty()
	if (v1.empty())
	{
		printf(" v1 is Empty!\n");
	}

	// 要素数を変更 resize() .reserve()
	v1.resize(5);		// 要素数を5に
	v1.resize(3);		// 要素数を3に
	v1.resize(6, -1);	// 要素数を6にして、
						// 要素増加分を -1 で初期化

	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = rand();
		printf(" v1[%d] = %d\n", i, v1[i]);
	}
	printf("\n");

	// あらかじめ最大数の領域を確保する .reserve()
	v1.reserve(100);	// 要素数100までは、素早く処理できる

	system("pause");
	return 0;
}

