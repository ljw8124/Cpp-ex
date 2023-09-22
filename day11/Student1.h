//
// Created by 이정우 on 2023/09/22.
//

#ifndef C___EX_STUDENT1_H
#define C___EX_STUDENT1_H
#include <iostream>
#include <string>
using namespace std;

#include "Person1.h"

class Student: public Person {
    string school;
public:
    void setSchool(const string s) {school = s;}
    string getSchool() const {return school;}
    void print() const {
        Person::print();
        cout << " goes to " << school;
    }
};

#endif //C___EX_STUDENT1_H
