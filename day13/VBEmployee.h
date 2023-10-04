//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_VBEMPLOYEE_H
#define C___EX_VBEMPLOYEE_H

#include "VBPerson.h"
using namespace std;

// Person 을 가상 기초 클래스로 상속
class Employee : virtual public Person {
    string company;
public:
    Employee(const string& n, const string& s): Person(n), company(s) {}
    void print() const {
        Person::print();
        cout << " is employed by " << company << endl;
    }
};

#endif //C___EX_VBEMPLOYEE_H
