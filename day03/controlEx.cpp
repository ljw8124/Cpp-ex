//
// Created by 이정우 on 2023/08/18.
//

#include <iostream>
using namespace std;

void ifElse(int a, int b) {

    if(a > b)                   // 조건
        cout << a << endl;      // true 일 때 실행 문장
    else
        cout << b << endl;      // false 일 때 실행 문장

}

char switchEx(int score) {

    char grade = 'F';

    switch(score) {
        case 10:
            grade = 'A';
            break;
        case 9:
            grade = 'B';
            break;
        case 8:
            grade = 'C';
            break;
        default:

    }
    return grade;
}

void loopEx() {
    int val, total = 0;

    // 열 번 반복
    for(int i = 0; i < 10; i++) {
        cin >> val;
        total += val;
    }

    // 범위 기반 for 루프 (C++ 11 이후)
    int arr[5] = {2, 3, 9, 4, 7};
    int sum = 0;

    for(int a : arr)
        sum += a;

    cout << "합게 = " << sum << endl;

    // while 루프
    int i = 0;

    while(i < 10) {
        cin >> val;
        total += val;
        i++;
    }

    // do...while 루프


}