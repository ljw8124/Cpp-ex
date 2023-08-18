//
// Created by 이정우 on 2023/08/18.
//

// 2차원 공간을 표시
struct C2dType {
    double x, y;
};

// 원 정보를 구함
struct CircleType {
    C2dType center;
    double radius;
};

// 원의 면적을 구함
double cricleArea(CircleType c) {
    const double PI = 3.14;
    return c.radius * c.radius * PI;
}