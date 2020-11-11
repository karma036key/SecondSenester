

#include <iostream>
#include "Enemy.h"
#include "Shot.h"

int main()
{
    // 「namespace」のデータの使い方
    // namespace名::データ
    printf("敵の最大数 = %d\n", Enemy::Max);
    printf("弾の最大数 = %d\n", Shot::Max);

    std::cout << "std:: も名前空間" << std::endl;
    return 0;
}

