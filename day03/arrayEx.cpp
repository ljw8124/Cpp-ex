//
// Created by 이정우 on 2023/08/18.
//

#include <iostream>
using namespace std;

void Arr1() {
    float fArray[4];

    int i = 0;

    fArray[i] = 10.0f;

    cin >> fArray[1] >> fArray[2] >> fArray[3];
    cout << fArray[1] * fArray[2];
}

int getMaxValue() {
    int max;
    int data[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};

    max = data[0];
    cout << "데이터: " << data[0];
    for(int i = 1; i < 10; i++) {
        cout << " " << data[i];
        if(max < data[i]) max = data[i];
    }

    cout << "\n\n배열의 최댓값: " << max << endl;
    return 0;
}
