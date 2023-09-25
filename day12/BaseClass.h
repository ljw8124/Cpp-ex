//
// Created by 이정우 on 2023/09/25.
//

#ifndef C___EX_BASECLASS_H
#define C___EX_BASECLASS_H

class BaseClass{
    int *ptB;
public:
    BaseClass(int n) { ptB = new int[n]; }

    // 가상함수로 선언
    virtual ~BaseClass() { delete [] ptB; }
};

#endif //C___EX_BASECLASS_H
