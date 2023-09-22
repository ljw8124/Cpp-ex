//
// Created by 이정우 on 2023/09/22.
//

#ifndef C___EX_PERSON2_H
#define C___EX_PERSON2_H
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    // 생성자
    Person(const string& n) {
        cout << "Person의 생성자" << endl;
        name = n;
    }
    // 소멸자
    ~Person() {
        cout << "Person의 소멸자" << endl;
    }

    string getName() const {return name;}
    void print() const {cout << name;}
};

#endif //C___EX_PERSON2_H
