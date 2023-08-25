//
// Created by 이정우 on 2023/08/25.
//

#ifndef C___EX_VECF_H
#define C___EX_VECF_H

#include <iostream>
#include <cstring>
using namespace std;

class VecF {
    int n;
    float* arr;

public:
    VecF(int d, const float* a = nullptr) : n{d} {
        arr = new float[d];
        if(a) memcpy(arr, a, sizeof(float) * n);
    }

    ~VecF() {
        delete[] arr;
    }

    VecF add(const VecF& fv) const {
        VecF tmp(n);
        for(int i = 0; i < n; i++) {
            tmp.arr[i] = arr[i] + fv.arr[i];
        }
        return tmp;
    }

    void print() const {
        cout << "[ ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << " ]";
    }

    // 복사 생성자 형성
     VecF(const VecF& fv) : n{fv.n} {
        arr = new float[n];
        memcpy(arr, fv.arr, sizeof(float)*n);
    }
};

#endif //C___EX_VECF_H
