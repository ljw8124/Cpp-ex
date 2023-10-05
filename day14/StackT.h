//
// Created by 이정우 on 10/5/23.
//

#ifndef C___EX_STACKT_H
#define C___EX_STACKT_H
#include <utility>
using namespace std;

template <typename T>
class StackT {
    T *buf;
    int top;
    int size;
public:
    StackT(int s);
    virtual ~StackT();

    bool full() const;
    bool empty() const;
    void push(const T& a);      // l value
    void push(T&& a);           // r value
    T&& pop();
};

// 템플릿의 경우 특이하게, 멤버함수를 다른 헤더파일에서 구체적으로 구현하는 것이 아니라 템플릿 헤더 파일에 같이 작성함
template <typename T> StackT<T>::StackT(int s) : size(s), top(s)
{
    buf = new T[s];
}

template <typename T> StackT<T>::~StackT()
{
    delete[] buf;
}

template <typename T> bool StackT<T>:: full() const
{
    return !top;
}

template <typename T> bool StackT<T>:: empty() const
{
    return top == size;
}

template <typename T> void StackT<T>:: push(const T& a)
{
    buf[--top] = a;     // l value 이므로 복사
}

template <typename T> void StackT<T>::push(T&& a)
{
    buf[--top] = move(a);   // r value 이므로 이동 대입 연산자를 이용하여 실제로 값을 옮겨줌
}

template <typename T> T&& StackT<T>::pop()
{
    return move(buf[top++]);
}

#endif //C___EX_STACKT_H
