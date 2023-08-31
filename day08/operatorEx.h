//
// Created by 이정우 on 2023/08/31.
//

#ifndef C___EX_OPERATOREX_H
#define C___EX_OPERATOREX_H

class IntClass1 {
    int a;
public:
    IntClass1(int n=0) : a(n) {}
    IntClass1& operator ++ () {
        ++a;
        return *this;   // 참조를 전달 -> a
    }
    int getValue() const { return a; }
};

class IntClass2 {
    int b;
public:
    IntClass2(int n=0) : b(n) {}
    IntClass2 operator ++ (int) {
        IntClass2 tmp(*this);
        ++b;
        return tmp;
    }
    int getValue() const { return b; }
};

#endif //C___EX_OPERATOREX_H
