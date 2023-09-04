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

//    // 이동 생성자 형성
//    VecF(VecF&& fv) : n{fv.n}, arr{fv.arr} {
//        fv.arr = nullptr;       // delete 할 때 아무이상 없기 위해서 비워야함
//        fv.n = 0;               // 데이터가 없다는 것을 의미하게 만듦
//    }


    ~VecF() {
        delete[] arr;
    }
};

#endif //C___EX_VECF_H
