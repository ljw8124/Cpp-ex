//
// Created by 이정우 on 2023/08/17.
//

int x;                      // 전역변수 - 정적 유효기간
int f() {
    int y{10};              // 지역변수 - 자동 유효기간
    static int z{0};        // 정적 지역변수 - 정적 유효기간
}