//
// Created by 이정우 on 2023/08/30.
//

#ifndef C___EX_CHARSTACK_H
#define C___EX_CHARSTACK_H

class CharStack {
    enum { size = 20 };                 // 스택의 크기
    int top;                            // 마지막 데이터를 가리키는 포인터
    char buf[size];                     // 스택의 배열 크기
public:
    CharStack() : top{ size } {}

    bool chkEmpty() const {
        return top == size;
    }

    bool chkFull() const {
        return !top;
    }

    bool push(char ch);

    char pop();
};

#endif //C___EX_CHARSTACK_H
