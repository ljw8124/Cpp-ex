//
// Created by 이정우 on 10/6/23.
//

#include "IntArray1.h"

Array::Array(int s) : size(s)               // 생성자
{
    buf = new int[s];
    memset(buf, 0, sizeof(int) * s);
}

int& Array::operator[](int offset)
{
    if(offset < 0 || offset >= size) {      // 예외조건 검사
        throw BadIndex();                   // 예외객체 생성 및 전달
    }
    return buf[offset];
}

