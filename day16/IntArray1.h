//
// Created by 이정우 on 10/6/23.
//

#ifndef C___EX_INTARRAY1_H
#define C___EX_INTARRAY1_H
#include <iostream>
#include <exception>
using namespace std;

const int DefaultSize = 10;

class Array {
    int *buf;
    int size;
public:
    Array(int s = DefaultSize);
    virtual ~ Array() { delete[] buf; }
    int& operator[](int offset);
    const int& operator[](int offset) const;
    int getSize() const { return size; }
    friend ostream& operator<<(ostream&, Array&);

    // exception class
    class BadIndex : public exception {
    public:
        int wrongIndex;
        BadIndex(int n) : wrongIndex(n), exception() {}
        const char* what() const {
            return "Array Exception::";
        }
    };
};


#endif //C___EX_INTARRAY1_H
