//
// Created by 이정우 on 10/5/23.
//

#ifndef C___EX_SWAPFUNC_H
#define C___EX_SWAPFUNC_H
#include <utility>
using namespace std;

template <typename ANY>
// 값을 교환하는 함수 템플릿
void swapFT(ANY &a, ANY &b)
{
    ANY temp = move(a);     // 복사가 아닌 이동
    a = move(b);
    b = move(temp);
}

#endif //C___EX_SWAPFUNC_H
