//
// Created by 이정우 on 2023/10/04.
//

#ifndef C___EX_CIRCLE_H
#define C___EX_CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
    double cx, cy;
    double radius;
public:
    Circle(double x, double y, double r) : cx(x), cy(y), radius(r) {}

    void move(double dx, double dy);
    void scale(double s);
    void draw() const;
};

#endif //C___EX_CIRCLE_H
