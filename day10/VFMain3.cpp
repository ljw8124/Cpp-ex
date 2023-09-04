//
// Created by 이정우 on 2023/09/04.
//

#include "../day06/VecF.h"
using namespace std;

int mainFunc()
{
    float a[3] = {1, 2, 3};
    float b[3] = {2, 4, 6};

    VecF v1(3, a);
    VecF v2(3, b);
    VecF v3(3);

    v3 = v1;    // 대입 연산자

    v3 = v1.add(v2);    // 이동 대입 연산자

    return 0;

}

// 대입 연산자 사용
void swapVecF(VecF& v1, VecF& v2) {
    VecF tmp(v1);       // 복사 생성자

    v1 = v2;            // 대입 연산자 사용
    v2 = tmp;           // 대입 연산자 사용
}

// move 를 이용하여 할당
void swapVecF2(VecF& v1, VecF& v2) {
    VecF tmp = move(v1);       // 복사 생성자

    v1 = move(v2);
    v2 = move(tmp);
}
