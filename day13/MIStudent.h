//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_MISTUDENT_H
#define C___EX_MISTUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
    string school;
public:
    Student(const string& s) : school(s) {}
    void printSchool() const { cout << school << endl; };
};

#endif //C___EX_MISTUDENT_H
