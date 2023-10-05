//
// Created by 이정우 on 10/5/23.
//

#include <iostream>
#include <vector>
using namespace std;

int vectorFunc()
{
    vector<int> intVec(5);

    // 데이터를 추가하는 경우를 가정
    for(int i = 0; i < intVec.size(); i++) {
        intVec[i] = i + 1;
    }

    cout << "벡터의 논리적 크기: " << intVec.size() << endl;            // 예상결과: 5
    cout << "벡터의 물리적 크기: " << intVec.capacity() << endl;        // 예상결과: 5
    cout << "저장된 데이터 : ";
    for(int i : intVec) {
        cout << i << " ";
    }

    cout << endl << endl << "1개의 데이터 push_back" << endl;

    intVec.push_back(11);

    cout << "벡터의 논리적 크기: " << intVec.size() << endl;            // 예상결과: 6
    cout << "벡터의 물리적 크기: " << intVec.capacity() << endl;        // 예상결과: 6보다 큰 숫자가 출력됨 -> 또 push 될 가능성이 생겼기 때문에 메모리 공간을 더 확보함
    cout << "저장된 데이터 : ";
    for(int i = 0; i < intVec.size(); i++) {
        cout << intVec[i] << " ";
    }

    cout << endl << endl << "5개의 데이터 push_back" << endl;

    for(int i = 1; i <= 5; i++) {
        intVec.push_back(i + 11);
    }
    cout << "벡터의 논리적 크기: " << intVec.size() << endl;            // 예상결과: 11
    cout << "벡터의 물리적 크기: " << intVec.capacity() << endl;        // 예상결과: 11보다 큰 숫자가 출력됨 -> 또 push 될 가능성이 생겼기 때문에 메모리 공간을 더 확보함
    cout << "저장된 데이터 : ";
    for(int i = 0; i < intVec.size(); i++) {
        cout << intVec[i] << " ";
    }

    // 데이터를 삭제하는 경우 가정
    cout << endl << endl << "3개의 데이터 pop_back" << endl;

    for(int i = 0; i < 3; i++) {
        intVec.pop_back();
    }
    cout << "벡터의 논리적 크기: " << intVec.size() << endl;            // 예상결과: 8
    cout << "벡터의 물리적 크기: " << intVec.capacity() << endl;        // 예상결과: pop 하기 전의 capacity() 크기와 같음
    cout << "저장된 데이터 : ";
    for(int i = 0; i < intVec.size(); i++) {
        cout << intVec[i] << " ";
    }
    cout << endl;

    return 0;

}