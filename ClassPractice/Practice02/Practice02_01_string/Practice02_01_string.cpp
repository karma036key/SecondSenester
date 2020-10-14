#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

int main()
{
    // C言語 の 文字出力
    char word = 'a';
    char name[] = "oogami atsushi";
    const char* cstr = "Hellow World";

    printf("%c\n", word);
    printf("%s\n", name);
    printf("%s\n", cstr);

    // string型
  //std::string str = "文字列";
  //std::string str;            // ""(空)
  //std::string str = "";       // ""(空)
  //std::string str = "ABC";    // "ABC"
  //std::string str("ABC");     // "ABC"
        std::string str2(3, 'A');   // "AAA"
        std::string str = str2;     // "AAA"

    //.c_str() の関数で文字列を受け取ってから使用
  //printf("&s\n", str.c_str());
    // C++的な書き方 (必須　iostring string インクルード)
    std::cout << str << std::endl;

    // 文字サイズ取得　.size() or .rength()
    std::cout << "str size = " << str.size() << std::endl;

    // 文字の挿入 +=, .push_back(), .append(), .insert()
    str += "BBC";           // "AAABBC"         末尾に文字追加
    str.push_back('D');     // "AAABBCD"        末尾に1文字追加
    str.append("EE");       // "AAABBCDEE"      末尾に文字追加
    str.insert(1, "FG");    // "AFGAABBCDEE"    指定場所に文字追加

    // 文字の検索 .find()
    str = "ABC ABC";
    int index = str.find('C');      // ２ 先頭から1文字探す
    index     = str.find("BC");     // １ 先頭から文字列を探す
    index     = str.find("BC", 2);  // ５ 指定の位置から文字列を探す
    index     = str.find("Z");      // -1 だが …
                                    // std::string::npos を使い判定


    // 文字の置き換え .replace()... 何文字目, 何文字分, 置き換え文字
    std::string flom = "BC";
    std::string to   = "X";
    str.replace(str.find(flom), flom.size(), to);    // "AX ABC"
    std::cout << str << std::endl;

    str.clear();
    std::cout << str << std::endl;

    system("pause");
    return 0;
}

