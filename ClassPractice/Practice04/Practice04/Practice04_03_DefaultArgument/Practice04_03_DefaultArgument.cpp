#include <iostream>

// デフォルト引数
// 関数の引数にはデフォルト値が設定 可
// 
class Calculator
{
public:
    int Add(int a, int b);
    // 引数b のデフォルト値 ２とする
    // 戻り値の型　関数(仮引数名 = 初期値)
    int Mul(int a, int b = 2);

    // 注 : デフォルト値設定　　宣言・定義どちらでも 可
    //      ただし、両方に書くことはできない                // "オススメ" .h 側(宣言)に書き定義部にコメント

    // 注 : デフォルト引数は末尾から順につけていくこと
    //int Sud(int a , int b, int c);
};
int Calculator::Add(int a,int b)
{
    return (a + b);
}

int Calculator::Mul(int a, int b/*= 2*/)
{
    return (a * b);
}

int main()
{
    Calculator calc;
    std::cout << calc.Add(10, 20) << std::endl;
    std::cout << calc.Mul(100,4) << std::endl;
    std::cout << calc.Mul(100) << std::endl;
    return 0;
}

