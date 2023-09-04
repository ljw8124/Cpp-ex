//
// Created by 이정우 on 2023/09/04.
//

#ifndef C___EX_MYSTRING_H
#define C___EX_MYSTRING_H
using namespace std;

class MyString {
    int len;
    int bufSize;
    char *buf;
    MyString(int s);

public:
    MyString();
    MyString(const char* str);
    MyString(const MyString* mstr);
    MyString(MyString&& mstr);;
    ~MyString();

    int length() const;

    MyString& operator=(const MyString& mstr);

    MyString& operator=(MyString&& mstr);

    MyString operator +(const MyString& mstr) const;
    MyString& operator +=(const MyString& mstr);
    bool operator ==(const MyString& mstr) const;
    bool operator >(const MyString& mstr) const;
    bool operator <(const MyString& mstr) const;
    char& operator[](int i);
    char operator[] (int i) const;
};

#endif //C___EX_MYSTRING_H
