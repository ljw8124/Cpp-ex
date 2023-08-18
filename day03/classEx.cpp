//
// Created by 이정우 on 2023/08/18.
//

// 원 클래스를 갖는다고 할 때,
// 행위
// init: 원 초기화
// area: 원의 면적을 계산
// chkOverlap: 다른 원과 중첩 여부 검사
// display: 원의 정보 디스플레이

// 속성
// center: 중심좌표
// radius: 반경

// 2차원 공간을 표시
struct C2dType {
    double x, y;
};

// 형식 예시
class CircleClass {
    C2dType center;
    double radius;

public:
    void init(double cx, double cy, double r) {
        center.x = cx;
        center.y = cy;
        radius = r;
    }

    double area() const {
        return radius * radius * 3.14;
    }

    bool chkOverlap(const CircleClass& c) const { return true; }
    void display() const {}
};


int useage() {
    CircleClass c1, c2;

    c1.init(0, 0, 10);
    c2.init(0, 0, 10);
}