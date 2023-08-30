//
// Created by 이정우 on 2023/08/30.
//

#include <iostream>
#include "CharStack.h"
using namespace std;

int mainStackFunc()
{
    CharStack chStack;      // 20개의 문자열을 받음
    char str[20];

    cout << "영어 단어를 입력하시오 : ";
    cin >> str;

    char* pt = str;
    while(*pt)
        chStack.push(*(pt++));

    cout << "역순 단어 출력 : ";
    while(!chStack.chkEmpty())
        cout << chStack.pop();
    cout << endl;

    return 0;
}
