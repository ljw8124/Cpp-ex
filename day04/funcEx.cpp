//
// Created by 이정우 on 2023/08/21.
//

#include <iostream>
using namespace std;

double maximum(const double arr[], int n) {
    double max = arr[0];

    for(int i = 1; i < n; i++)
        if (max < arr[i]) max = arr[i];

    return max;
}

// 중복 제거를 위한 maximum 함수화
void mainFunc() {
    double a[50], b[100];

    cout << maximum(a, 50) << endl;
    cout << maximum(b, 100) << endl;
}