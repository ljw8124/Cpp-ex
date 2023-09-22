//
// Created by 이정우 on 2023/09/22.
//

#ifndef C___EX_PERSON1_H
#define C___EX_PERSON1_H
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    void setName(const string& n) {name = n;}
    string getName() const {return name;}
    void print() const {cout << name;}
};

#endif //C___EX_PERSON1_H

