#include <iostream>         // 선행처리기로, 표준 라이브러리에서 iostream 을 가져오겠다는 의미
using namespace std;        // using 지시어를 사용하여 std namespace 안에 선언된 모든 요소를 해당 코드 전역에서 사용하도록 설정

int main() {                // int 형 데이터를 반환하는 main 함수 선언
    int a = 10, b = 20;     // int 형 a 와 b 를 각각 10, 20 으로 값 할당
    int& aRef = a;          // aRef 라는 변수명을 가진 참조변수가 a를 참조하도록 선언

    cout << "a의 값: " << a << endl;                        // a 의 값이 처음 할당한 10으로 나오는지 확인, 그리고 줄바꿈
    cout << "aRef가 참조하는 값: " << aRef << endl << endl;   // aRef 가 참조하는 값이 a 가 맞는지 확인, 그리고 두번 줄바꿈
    aRef = 100;                                            // aRef(a의 참조값) 을 100으로 변경
    cout << "a의 값: " << a << endl;                        // aRef 를 변경하였으므로 참조하고 있는 값 a 가 100으로 변경되었는지 확인, 그리고 줄 바꿈
    aRef = b;                                              // aRef(a의 참조값) 을 b로 변경
    cout << "a의 값: " << a << endl;                        // aRef 를 변경하였으므로 참조하고 있는 값 a 가 5 값 인 20으로 변경되었는지 확인, 그리고 줄 바꿈
    return 0;                                              // main 함수의 리턴값을 int 로 지정했기 때문에 0 반환
}
