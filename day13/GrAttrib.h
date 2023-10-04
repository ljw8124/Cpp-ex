//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_GRATTRIB_H
#define C___EX_GRATTRIB_H

#include <string>
#include <iostream>
using namespace std;

class GrAttrib {
    string lineColor;
    string fillColor;
public:
    // 그래픽 속성 객체 생성자
    GrAttrib() : lineColor("검정색"), fileColor("흰색");
    GrAttrib(const string& lc, const string& fc) : lineColor(lc), fillColor(fc) {};

    // 속성 지정 멤버함수
    void setLineColor(const string& lc) { lineColor = lc; }
    void setFillColor(const string& fc) { fillColor = fc; }

    // 속성 값을 읽는 멤버함수
    string getLingColor() const { return lineColor; }
    string getFillColor() const { return fillColor; }
};

// 현재 속성을 나타내는 전역 객체
// extern 은 프로그램 끝날 때 까지 사용하겠다는 의미
extern GrAttrib curAttrib;

#endif //C___EX_GRATTRIB_H
