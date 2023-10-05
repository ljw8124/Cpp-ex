//
// Created by 이정우 on 10/5/23.
//

#ifndef C___EX_VECTOR2_H
#define C___EX_VECTOR2_H

#include <iostream>
#include <vector>
using namespace std;

int vectorFunc()
{
    vector<int> intVec(5);

    for(int i = 0; i < intVec.size(); i++) {
        intVec[i] = i + 1;
    }

//    vector<int>::iterator it = intVec.begin();
    auto it = intVec.begin();   // 자료형 추론을 이용한 반복자 선언
    cout << "저장된 데이터 : ";
    for(; it < intVec.end(); it++) {
        cout << *it << " ";                  // 에스터리스크는 포인터와 같이 반복자를 읽어냄
    }
    cout << endl;

    it = intVec.begin();
    cout << "3번 째 데이터 : ";
    cout << *(it + 2) << endl;

    return 0;

}

#endif //C___EX_VECTOR2_H
