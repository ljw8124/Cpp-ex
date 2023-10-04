//
// Created by 이정우 on 2023/10/04.
//

#include "Circle.h"

void Circle::move(double dx, double dy) {
    cx += dx;
    cy += dy;
}

void Circle::scale(double s) {
    cx *= s;
    cy *= s;

    radius *= s;
}

void Circle::draw() const {
    cout << "원 그리기" << endl;
    cout << "(" << cx << ", " << cy << ")에서부터 ";
    cout << radius << "만큼 떨어진 모든 점들을 ";
    cout << attrib.getLingColor() << "으로 그리고" << endl;
    cout << "내부를 " << attrib.getFillColor();
    cout << "으로 채운다." << endl;
}