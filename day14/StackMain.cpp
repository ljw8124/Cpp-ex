//
// Created by 이정우 on 10/5/23.
//

#include "StackT.h"
#include <iostream>
using namespace std;

int mainFunc()
{
    StackT<char> sc(100);
    sc.push('a');
    sc.push('b');
    cout << "CHAR STACK : ";
    while(!sc.empty()) {
        cout << sc.pop();
    }
    cout << endl;

    StackT<int> si(100);
    si.push(1);
    si.push(2);
    cout << "INT STACK : ";
    while(!si.empty()) {
        cout << si.pop();
    }
    cout << endl;
}
