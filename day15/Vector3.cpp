//
// Created by 이정우 on 10/5/23.
//

#include <iostream>
#include <vector>
#include <cstdlib>      // c 표준 라이브러리
#include <ctime>        // c 시간 라이브러리
#include <algorithm>
using namespace std;

int vectorFunc()
{
    srand((unsigned)time(NULL));    // 난수 발생기 초기화

    vector<int> iv1(5);

    cout << "벡터1 : ";
    for(auto& i : iv1) {
        i = rand() % 100;
        cout << i << " ";
    }
    // 디폴트 오름차순
    sort(iv1.begin(), iv1.end());
    cout << endl << "정렬된 벡터1 : ";
    for(auto i : iv1) {
        cout << i << " ";
    }
    cout << endl << endl;

    vector<int> iv2(5);

    cout << "벡터2 : ";
    for(auto& i : iv2) {
        i = rand() % 100;
        cout << i << " ";
    }
    sort(iv2.begin(), iv2.end());
    cout << endl << "정렬된 벡터2 : ";
    for(auto i : iv2) {
        cout << i << " ";
    }
    cout << endl << endl;

    // 합병
    vector<int> iv3(iv1.size() + iv2.size());

    merge(iv1.begin(), iv1.end(), iv2.begin(), iv2.end(), iv3.begin());
    cout << "벡터1과 벡터2를 합병한 결과 : ";
    for(auto i : iv3) {
        cout << i << " ";
    }
    cout << endl << endl;

    return 0;
}
