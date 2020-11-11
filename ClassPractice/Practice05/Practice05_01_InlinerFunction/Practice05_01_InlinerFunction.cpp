/*
inline関数
	良いところ
	  関数呼び出しの負荷がなくなり、処理の高速化がされる
	悪いところ
	　関数の規模が大きい場合、展開されない
	　展開する特性上、ファイルサイズが増大し、
			変更時のビルドファイル数が増加
	　classの場合、.h に直接コーディングするので隠蔽性が下がる
*/

#include <iostream>
#include <windows.h>
#include <stdio.h>

#define USE_INLINE

/*
インライン関数の書き方

inline 戻り値の型 関数名(引数)
{
	処理
}

*/

inline int AddSum(int a, int b)
{
	return (a + b);
}

// クラスに inline関数 を書きたい場合
class Test
{
public:
	// 関数の宣言部に定義も書いてしまうと...
	// 自動的に inline関数として扱われる
	int AddSum(int a, int b)
	{
		return (a + b);
	}
};




#ifdef USE_INLINE
inline unsigned int Pow(int a, int b)
{
	return (a + b);
}
#else
unsigned int ()
{

}
#endif

int main()
{
	int a = AddSum(1, 3);
	// コンパイル時、a = (a + b) -> a (1 + 3) に展開される

	LARGE_INTEGER s, e;
	QueryPerformanceCounter(&s);
	unsigned int pow = 0;
	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < 10000; j++)
		{
			pow = Pow(i, j);
		}
	}
	printf("pow = %d\n", pow);
	QueryPerformanceCounter(&s);
	double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
	printf("time = %f sec\n", t);


	return 0;
}