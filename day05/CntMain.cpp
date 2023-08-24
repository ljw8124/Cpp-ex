//
// Created by 이정우 on 2023/08/24.
//

#include <iostream>
#include "Counter.h"
using namespace std;

int mainFunc()
{
    Counter cnt;

//    cnt.value = 0;
    cnt.reset();

//    cout << "계수기의 현재 값: " << cnt.value << endl;
    cout << "계수기의 현재 값: " << cnt.getValue() << endl;

//    cnt.value++;
//    cnt.value++;
    cnt.count();
    cnt.count();

//    cout << "계수기의 현재 값: " << cnt.value << endl;
    cout << "계수기의 현재 값: " << cnt.getValue() << endl;

    return 0;

}