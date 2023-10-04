//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_TRIANGLE_H
#define C___EX_TRIANGLE_H

#include "Figure.h"

class Triangle: public Figure {
    // 삼격형의 세 꼭짓점 좌표(x1, y1), (x2, y2), (x3, y3)
    double x1, y1, x2, y2, x3, y3;
public:
    Triangle(const double v[3][2]);

    // 삼각형의 이동, 원점 크기조정, 그리기 멤버함수
    void move(double dx, double dy);
    void scale(double s);
    void draw() const;
};

#endif //C___EX_TRIANGLE_H
