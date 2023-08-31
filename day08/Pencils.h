//
// Created by 이정우 on 2023/08/31.
//

#ifndef C___EX_PENCILS_H
#define C___EX_PENCILS_H

class Pencils {
    int dozens;
    int np;
public:
    Pencils() : dozens(0), np(0) {};
    Pencils(int n) { dozens = n / 12; np = n % 12; }
    Pencils(int d, int n) : dozens(d), np(n) {}

    Pencils& operator ++ ();        // 전위
    Pencils operator ++ (int);       // 후위

    void display() const;
};

#endif //C___EX_PENCILS_H
