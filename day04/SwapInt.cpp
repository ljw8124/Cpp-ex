//
// Created by 이정우 on 2023/08/21.
//

#include <iostream>
using namespace std;
void SwapValues(int& a, int& b);

int mainFunc()
{
    int a, b;

    cout << "두수를 입력하시오: ";
    cin >> a >> b;

    if(a < b) SwapValues(a, b);         // 순서를 바꿔 a 에 큰 값을 넣음
    cout << "큰 수 = " << a << "작은 수 = " << b << endl;

    return 0;
}

// 실 매개변수를 바꿔줌
void SwapValues(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}