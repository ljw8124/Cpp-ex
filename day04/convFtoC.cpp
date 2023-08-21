//
// Created by 이정우 on 2023/08/21.
//

#include <iostream>
using namespace std;

float FahrToC(float fahr);  // 함수의 어ㅜㄴ형
int mainFuc()
{
    float fTemp, cTemp;

    cout << "화씨온도: ";
    cin >> fTemp;
    cTemp = FahrToC(fTemp);
    cout << "---> 섭씨온도: " << cTemp << endl;
    return 0;
}

// 화씨온도를 섭씨온도로 변환하는 함수
// 매개변수     float fahr: 화씨온도
// 반환값      섭씨온도(float)
float FahrToC(float fahr)
{
    // 묵시적 형변환으로 float 으로 리턴 될 것임
    return (fahr - 32) * 5 / 9;
}

// 만악 메인함수가 선언된 후에 FahrToC 가 선언된 경우
// 메인함수 이전에 선언을 하지 않았으므로, 컴파일 단계에서 에러가 난다.
// 8번 라인처럼 함수의 원형을 선언하여, 미리 이런 함수가 있다 라는 것을 알려주는 역할을 한다.
// 함수의 머리부분만 적으면된다. 또한 인수 이름도 쓰지 않아도 되지만, 쓰는것이 가독성 측면에서 좋다.