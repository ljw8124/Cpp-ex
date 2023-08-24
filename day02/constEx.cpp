//
// Created by 이정우 on 2023/08/17.
//

#include <iostream>
using namespace std;

int a;
//cin >> a;
/*
const int b = 20;
const int C1 = a;           // cin 을 통해 입력된 a 의 값으로 초기화

constexpr int C2 = a + 10;  // 오류: 컴파일 시에 a 의 값을 입력받지 않았으므로 알 수가 없음 -> 따라서 컴파일 불가
constexpr int C3 = b + 100; // b + 100 은 컴파일 시에 계산할 수가 있으므로 오류가 아님 -> 실행시간 조금이라도 단축 가능
constexpr int C4 = C1 * 2;  // 컴파일 시에 C1 의 값을 알 수가 없음

constexpr int fac(int n) {
    return n > 1 ? n * fac(n-1) : 1;
}

void f(int x) {
    constexpr int a = fac(4);       // 컴파일할 때 미리 계산
    int b = fac(x);                 // 실행 중 계산
}
 */