//
// Created by 이정우 on 2023/10/04.
//

#include <iostream>
#include <string>
#include "GrAttrib.h"
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

GrAttrib curAttrib("검정", "흰색");

void drawFigs(const Figure * const figs[], int n) {
    for(int i = 0; i < n; i++) {
        figs[i] -> draw();          // (*figs[i]).draw(); 로도 표기할 수 있음
        cout << endl;
    }
}

int mainFunc() {
    Figure *figs[2];

    figs[0] = new Circle(0, 20, 10);
    double v[3][2] = { {0, 0}, {20, 0}, {10, 15} };

    // 원은 선:검정, 채우기:흰색으로 설정
    // 삼각형만 선:빨강, 채우기:노랑으로 설정
    curAttrib.setLineColor("빨강");
    curAttrib.setFillColor("노랑");

    figs[1] = new Triangle(v);

    drawFigs(figs, 2);

    return 0;
}