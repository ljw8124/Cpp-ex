//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_VBSTUDENT_H
#define C___EX_VBSTUDENT_H
#include "VBPerson.h"
using namespace std;

// Person 을 가상 기초 클래스로 상속
class Student : virtual public Person {
    string school;
public:
    Student(const string& n, const string& s): Person(n), school(s) {}
    void print() const {
        Person::print();
        cout << " goes to " << school << endl;
    }
};

#endif //C___EX_VBSTUDENT_H
