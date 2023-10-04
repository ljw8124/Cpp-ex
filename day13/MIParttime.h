//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_MIPARTTIME_H
#define C___EX_MIPARTTIME_H

#include <string>
#include "MIStudent.h"
#include "MIEmployee.h"
using namespace std;

// Student 와 Employee 둘 다 상속받음
class Parttime : public Student, public Employee {
public:
    Parttime(const string& s, const string& c) : Student(s), Employee(c) {}
};


#endif //C___EX_MIPARTTIME_H
