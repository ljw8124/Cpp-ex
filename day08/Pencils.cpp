//
// Created by 이정우 on 2023/08/31.
//

#include <iostream>
#include "Pencils.h"
using namespace std;

Pencils& Pencils::operator++() {
    if(++np >= 12)
        ++dozens, np = 0;
    return *this;
}

Pencils Pencils::operator++(int) {
    Pencils tmp(*this);
    if(++np >= 12)
        ++dozens, np = 0;
    return tmp;

}