
#include <iostream>

class A
{
public:
    explicit A(int val)
    //A(int val) 
    {
        std::cout << val << std::endl; 
    }
};

class B
{
public:
    explicit B(const A& ref)
    //B(const A& ref)
    {

    }
};

int main()
{
    // 引数1つだけとるコンストラクタ ＝ 暗黙の型変換が行われる可能性
    // 暗黙の型変換のコンストラクタ ＝ 変換コンストラクタ
    
/*
    B b(10000);     // Bクラス のコンストラクタは Aクラスの参照 では？
                    // 暗黙的に B( A(10000) ) と解釈

    A test = 100;   // Aクラス変数にデータ型代入？
                    // 暗黙的に A test =A(100)と解釈
                    // コピーコンストラクタに…
*/

    A a(35);        // Aクラスのコンストラクタ
                    // 問題なし



    return 0;
}
