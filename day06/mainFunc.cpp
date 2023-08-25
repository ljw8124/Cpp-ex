//
// Created by 이정우 on 2023/08/25.
//

#include "CounterM.h"
#include "VecF.h"

int mainFunc()
{
    CounterM cnt4{99};
    CounterM cnt5{cnt4};
    CounterM cnt6 = cnt4;

    // 깊은 복사
    float a[3] = {1, 2, 3};
    VecF v1(3, a);
    VecF v2(v1);


}