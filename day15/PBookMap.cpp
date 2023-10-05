//
// Created by 이정우 on 10/5/23.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

template<typename T>
class LESS_T {
public:
    bool operator()(const T& a, const T& b) const {
        return a < b;
    }
};

int pbookFunc()
{
    map<string, string, LESS_T<string>> pBook {
        {"한정훈", "010-2222-3333"},
        {"박영철", "010-4444-5555"},
    };
    pBook["김철수"] = "010-1234-5678";

    pBook.insert(make_pair("최승호", "010-6666-7777"));
    pBook.insert({"박영철", "010-8888-9999"});         // 키값이 중복되어 insert 되지 않음 -> 무시

    for(auto pb = pBook.begin(); pb != pBook.end(); ++pb) {
        cout << pb -> first << "   " << pb -> second << endl;
    }
    cout << pBook.size() << "명이 등록되어 있습니다." << endl;
}