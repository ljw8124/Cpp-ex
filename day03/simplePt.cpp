//
// Created by 이정우 on 2023/08/18.
//

#include <iostream>
using namespace std;

int ptrExFunc() {
    int a = 10;
    int* ptr;

    ptr = &a;
    cout << "ptr이 가리키는 값 : " << *ptr << endl;

    *ptr = 20;
    cout << "변수 a의 값 : " << a << endl;

    return 0;
}

// l-value 참조예시
void lValueExFunc() {
    int a = 10, b = 20;

    int& aRef = a;
    cout << aRef << endl;

    aRef = 100;
    aRef = b;
}

void constExFunc() {
    int x {10};
    const int& xRef = x;
    cout << xRef << endl;
//    xRef += 10;  // 오류 : const 참조로 값을 수정할 수 없음
}