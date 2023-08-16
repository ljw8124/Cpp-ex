// 해쉬문자 include ~ 식의 표현은 선행처리기의 표현 중 하나이다.
#include <iostream>

int main()
{
    // 표준 출력 스트림으로 문장을 출력함
    std::cout << "나의 첫 번째 C++ 프로그램"
              << std::endl;
    return 0;
}

void commentFunc(int a, int b)
{
    // a와 b의 값 중에서
    // 더큰 값을 출력한다.
    if(a > b)
        std::cout << a << std::endl;
    else
        std::cout << b << std::endl;

}