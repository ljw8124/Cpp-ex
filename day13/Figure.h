//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_FIGURE_H
#define C___EX_FIGURE_H

#include "GrAttrib.h"

class Figure {
protected:
    GrAttrib attrib;
public:
    // 현재 그래픽 속성에 따라 도형 객체 생성
    Figure() : attrib(curAttrib) {}

    void setLineColor(const string& lc) {
        attrib.setLineColor(lc);
    }

    void setFillColor(const string& fc) {
        attrib.setFillColor(fc);
    }

    // 도형의 이동, 원점 기준 크기조정, 그리기 멤버함수
    // 순수 가상 함수로 선언
    virtual void move(double dx, double dy) = 0;
    virtual void scale(double s) = 0;
    virtual void draw() const = 0;

};


#endif //C___EX_FIGURE_H
