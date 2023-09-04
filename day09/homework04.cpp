#include <iostream>     // 선행처리기로, 표준 라이브러리에서 iostream 을 가져오겠다는 의미
using namespace std;    // using 지시어를 사용하여 std namespace 안에 선언된 모든 요소를 해당 코드 전역에서 사용하도록 설정

int main() {            // int 형 데이터를 반환하는 main 함수 선언

    int *intPtr;        // 포인터 변수 선언

    intPtr = new int[4];    // new 연산자를 이용하여 4개의 int 값을 저장할 메모리 할당

    *intPtr = 10;           // 포인터 intPtr 에 순차적으로 값이 할당됨 (0부터)

    *(intPtr + 1) = 20;     // 포인터 연산자가 먼저 실행되도록 괄호로 묶음. 이미 할당되어있는 주소 바로 다음 주소에 할당
    intPtr[2] = 30;         // 2번 째 인덱스에 해당하는 주소에 값을 할당
    intPtr[3] = 40;         // 3번 째 인덱스에 해당하는 주소에 값을 할당

    for(int *p = intPtr, i = 0; i < 4; i ++)    // *p 를 intPtr 이라고 하고, i 를 5번 실행하는 for반복문
        cout << p[i] << " ";                    // intPtr(p)[i] 해당주소가 가리키는 값 출력

    cout << endl;                               // 줄바꿈 출력

    delete intPtr;                  // delete 를 이용하여 할당한 메모리를 반환

    return 0;                       // main 함수의 리턴값을 int 로 지정했기 때문에 0 반환
}
