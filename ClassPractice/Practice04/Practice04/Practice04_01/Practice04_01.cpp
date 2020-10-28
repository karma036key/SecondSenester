#include "Test.h"
#include <iostream>

int main()
{
    Test testA;
    Test testB;

    testA.SetValue(10);
    testA.SetStaticValue(9872);
    testB.SetValue(345);
    // static メンバ関数 書き方(補足)
    Test::SetStaticValue(1000);

    testA.PrintValue();
    testB.PrintValue();

    // static 関数・変数 使い方1例(実体のカウント)
    Test::PrintCount();
    // ブロック {} は単体で運用OK
    {
        Test TestC;
        Test::PrintCount();
    }
    Test::PrintCount();

    return 0;
}
