// 해쉬문자 include ~ 식의 표현은 선행처리기의 표현 중 하나이다.
// <> 는 폴더를 미리 설정하는 것인데, 표준 라이브러리에서 가져올 때 사용한다.
// 반면에 커스텀하여 만든 헤더파일은 "" 로 호출을 하게 된다.
#include <iostream>

// 함수의 머리부
// 프로그램의 시작점이 된다.
int main()
// 아래 중괄호가 몸체 블록이다.
{
    // 표준 출력 스트림으로 문장을 출력함
    // 출력을 위해 사용
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