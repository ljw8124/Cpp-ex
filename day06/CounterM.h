//
// Created by 이정우 on 2023/08/25.
//

#ifndef C___EX_COUNTERM_H
#define C___EX_COUNTERM_H

class CounterM {
    const int maxValue;
    int value;

public:
    CounterM(int mVal)
    // 콜론 : 멤버이름{초기값}, 멤버이름{초기값}
    : maxValue{mVal}, value{0} { }

    void reset() {value = 0;}
    void count() {
        value = value < maxValue ? value + 1 : 0;
    }
    CounterM(const CounterM& c)
    : maxValue{c.maxValue}, value{c.value} {

    }
};

// 위 클래스는 생성자를 만들었으므로, 생성자의 매개변수에 맞게 선언해주어야 한다
// CounterM cnt(100); -> 가능
// CounterM cnt();    -> 에러
// CounterM cntMArr[3] = {CounterM(9), CounterM(7), CounterM(8)}; // 이런 식으로 배열을 선언해야 함
#endif //C___EX_COUNTERM_H
