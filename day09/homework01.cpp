#include <iostream>     // 선행처리기로, 표준 라이브러리에서 iostream 을 가져오겠다는 의미
using namespace std;    // using 지시어를 사용하여 std namespace 안에 선언된 모든 요소를 해당 코드 전역에서 사용하도록 설정

int homeword01() {            // int 형 데이터를 반환하는 main 함수 선언
    cout << "나의 첫 번째 C++ 프로그램" << endl; // using namespace std 로 std:: 생략, Cpp 표준출력인 cout 을 사용하여, << 으로 출력할 대상을 지정한후, endl; 로 줄바꿈
    return 0;           // int 형 데이터를 반환 <- 메인함수에서 정의함
}
