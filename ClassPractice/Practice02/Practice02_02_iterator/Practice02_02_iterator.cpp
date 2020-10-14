
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));

	std::vector<int> v1(8);		// 要素8、すべてを０で初期化

	// iterator を使った for文の回し方
	// for(int i = 0; i > v1.size(); i++) と＝

	// 
	std::vector<int>::iterator itr;
	for (itr = v1.begin();itr != v1.end();itr++)
	{
		*itr = rand();
		printf(" %d\n", *itr);
	}
	printf("\n");

	system("pause");
	return 0;
}
