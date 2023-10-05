//
// Created by 이정우 on 10/5/23.
//

#ifndef C___EX_STACK1_H
#define C___EX_STACK1_H

// 여기서 자료형을 선언한 이유는 스택의 자료형을 변경하기 용이하게 하기 위해서이다.
typedef int STACK_ITEM;
class Stack1 {
    enum { MAXSTACK = 20 };
    int top;
    STACK_ITEM item[MAXSTACK];
public:
    Stack1();
    bool empty() const;
    bool full() const;
    void initialize();
    void push(STACK_ITEM s);
    STACK_ITEM pop();
};

#endif //C___EX_STACK1_H
