//
// Created by 이정우 on 2023/09/25.
//

#ifndef C___EX_DRVCLASS_H
#define C___EX_DRVCLASS_H

#include "BaseClass.h"

class DrvClass : public BaseClass {
    int *ptD;
public:
    DrvClass(int n1, int n2) : BaseClass(n1) { ptD = new int[n2]; }

    // 기초 클래스에 가상함수로 선언함으로써, delete 시 파생 클래스와 기초 클래스의 소멸자가 모두 동작한다. -> 제대로 메모리 반환
    ~DrvClass() { delete [] ptD; }
};

#endif //C___EX_DRVCLASS_H
