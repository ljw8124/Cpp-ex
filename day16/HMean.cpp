//
// Created by 이정우 on 10/6/23.
//

#include <iostream>
using namespace std;

double hmean(double a, double b) {
    if(a == -b) {
        throw "조화 평균을 계산할 수 없음!";
    }
    return 2.0 * a * b / (a + b);
}

int mainFunc() {
    double x, y, z;
    char cFlag = 'y';

    while(cFlag != 'n') {
        cout << "\n두 수를 입력하시오 : ";
        cin >> x >> y;
        try {
            z = hmean(x, y);
            cout << "조화평균 = " << z << endl;
        }
        catch(const char* s) {  // s는 hmean 에서 throw 한 문자열(조화 평균을 계산할 수 없음!)
            cout << s << endl;
        }
        cout << "계속 할까요? (y/n) : ";
        cin >> cFlag;

    }
    return 0;
}