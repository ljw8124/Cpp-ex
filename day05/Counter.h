//
// Created by 이정우 on 2023/08/24.
//

#ifndef C___EX_COUNTER_H
#define C___EX_COUNTER_H

// 클래스는 모듈화하여 다른 곳에서도 사용하기 위해 헤더파일로 만듦
class Counter {
    // private 가 디폴트이므로 설정 필요x -> cf 구조체인 경우 디폴트가 public 이므로 private 설정을 해주어야 함
    int value = 0;

public:
    // 값 초기화
    void reset() {
        value = 0;
    }

    // 값 증가(+1)
    void count() {
        ++value;
    }

    // 현재 값 반환
    int getValue() const {      // const 사용은 데이터 멤버의 값을 수정하지 않는 멤버함수를 의미힌다.
        return value;
    }
};

#endif //C___EX_COUNTER_H
