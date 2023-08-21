//
// Created by 이정우 on 2023/08/21.
//

#include <iostream>
using namespace std;

double Round(double x, int d = 0);

int mainFunc()
{
    // ...
}

double Round(double x, int d)
{
    double a  = x >= 0 ? 0.5 : -0.5;
    double pow10 = pow(10, d);              // pow 는 제곱하는 함수
    return trunc(x * pow10 + a) / pow10;    // trunc 는 소수점 자르는 함수

}