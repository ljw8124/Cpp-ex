//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_VBPERSON_H
#define C___EX_VBPERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person(const string &n) : name(n) {}
    virtual ~Person() {}
    virtual void print() const { cout << name << endl; }
};

#endif //C___EX_VBPERSON_H
