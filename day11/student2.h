//
// Created by 이정우 on 2023/09/22.
//

#ifndef C___EX_STUDENT2_H
#define C___EX_STUDENT2_H
#include <iostream>
#include <string>
using namespace std;

#include "Person2.h"

class Student: public Person {
    string school;
public:
    Student(const string& n, const string& s): Person(n) {
        cout << "Student의 생성자" << endl;
        school = s;
    }
    ~Student() {
        cout << "Student의 소멸자" << endl;
    }
    //....
};
#endif //C___EX_STUDENT2_H
