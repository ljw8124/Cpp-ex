//
// Created by 이정우 on 2023/08/25.
//

#ifndef C___EX_NAMEOBJ_H
#define C___EX_NAMEOBJ_H
#include <iostream>
using namespace std;

class NameObj {
    char* name;
    int id;
    // static 데이터 멤버
    static int nConstr;     // 생성된 객체 수
    static int nDestr;      // 소멸된 객체 수

public:
    NameObj(const char* s); // 생성자
    ~NameObj();

    void display() const {
        cout << "ID : " << id << " --> 이름 : " << name << endl;
    }

    // 멤버함수
    static int nObj() {
        return nConstr - nDestr;
    }
};

#endif //C___EX_NAMEOBJ_H
