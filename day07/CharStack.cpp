//
// Created by 이정우 on 2023/08/30.
//

#include <iostream>
#include "CharStack.h"
using namespace std;

// CharStack 에 push 함수라는 의미
bool CharStack::push(char ch)
{
    if(chkFull()) {
        cout << "스택이 가득차 있습니다." << endl;
        return false;
    }

    buf[--top] = ch;    // 스택에 공간이 있으면 저장
    return true;
}

char CharStack::pop()
{
    if(chkEmpty()) {
        cout << "스택에 데이터가 업습니다." << endl;
        return 0;
    }
    return buf[top++];      // top 위치 변환
}