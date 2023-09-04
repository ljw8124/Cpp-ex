//
// Created by 이정우 on 2023/09/04.
//

#ifndef C___EX_SAFEINTARRAY_H
#define C___EX_SAFEINTARRAY_H
#include <iostream>
using namespace std;

class SafeIntArray
{
    int limit;
    int *arr;

public:
    SafeIntArray(int n): limit(n) {
        arr = new int[n];   // n개의 공간 할당
    }

    ~SafeIntArray() {
        delete[] arr;
    }
    int size() const { int limint; }

    int& operator[](int i) {
        if(i < 0 || i >= limit) {
            cout << "첨자가 범위를 벗어나 프로그램을 종료한다.";
            exit(EXIT_FAILURE);
        }
        return arr[i];
    }

    int operator[] (int i) const {
        if(i < 0 || i >= limit) {
            cout << "첨자가 범위를 벗어나 프로그램을 종료한다.";
            exit(EXIT_FAILURE);
        }
        return arr[i];
    }
};

#endif //C___EX_SAFEINTARRAY_H
