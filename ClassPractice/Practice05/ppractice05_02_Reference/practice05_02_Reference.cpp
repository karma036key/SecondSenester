#include <iostream>

// 参照を引数に持つ関数
void Init(int& rhp, int& rmp)
{
    rhp = 50;
    rmp = 10;
}
//const 参照渡し
 void Print(const int& rhp, const int& rmp)
{

    printf("hp = %d\n", rhp);
    printf("mp = %d\n", rmp);

}

int main()
{
    // 参照型
    // データ型& 変数名
    int val = 0;
    int& ref = val;     // int の参照型変数 ref
    int* pVal = &val;   // ポインタ変数

    printf("val  アドレス：%x\n", &val);
    printf("ref  アドレス：%x\n", &ref);
    printf("pVal アドレス：%x\n", &pVal);
    
    printf("\n");
    printf("val に 100 を代入\n");
    val = 100;
    printf("val = %d\n", val);
    printf("ref = %d\n", ref);

    printf("\n");
    printf("ref に　20 を代入\n");
    ref = 20;
    printf("val = %d\n", val);
    printf("ref = %d\n", ref);

    // 参照渡し     // 引数に参照を持つ関数へ変数を渡すこと
    printf("\n");
    int hp = 0;
    int mp = 0;
    Init(hp, mp);
    Print(hp,mp);

    // 
    // 
    return 0;
}

