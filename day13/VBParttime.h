//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_VBPARTTIME_H
#define C___EX_VBPARTTIME_H

#include "VBStudent.h"
#include "VBEmployee.h"

// Person 을 가상 기초 클래스로 상속받았기 때문에, 하나만 상속됨
class Parttime : public Student, public Employee {
public:
    // 상속받은 클래스의 생성자를 명시적으로 호출함
    Parttime(const string& n, const string& s, const string& c)
        : Person(n), Student(n, s), Employee(n, c) {}

    void print() const {
        Student::print();
        Employee::print();
    }
};

#endif //C___EX_VBPARTTIME_H
