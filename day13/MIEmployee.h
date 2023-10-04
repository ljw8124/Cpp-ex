//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_MIEMPLOYEE_H
#define C___EX_MIEMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee {
    string company;
public:
    Employee(const string& c) : company(c) {}
    void printCompany() const { cout << company << endl; }
};

#endif //C___EX_MIEMPLOYEE_H
