#include <iostream>     // 선행처리기로, 표준 라이브러리에서 iostream 을 가져오겠다는 의미
using namespace std;    // using 지시어를 사용하여 std namespace 안에 선언된 모든 요소를 해당 코드 전역에서 사용하도록 설정

int homeword03() {            // int 형 데이터를 반환하는 main 함수 선언
    int a = 10, b = 100;    // int 형 변수 a, b 를 각 10, 100 으로 값을 할당함

    int *ptr = &a;      // ptr 을 포인터로 선언하고, a 의 주소값을 할당함

    cout << "ptr이 가리키는 곳의 값 : " << *ptr << endl;  // *ptr 를 호출하여 ptr 포인터가 가리키는 a 의 값을 출력시킴, 그리고 줄바꿈

    *ptr = 20;      // 포인터 ptr 이 가르키는 주소에 20 을 할당

    cout << "변수 a의 값 : " << a << endl; // a 의 값도 20으로 바뀐 것을 확인, 그리고 줄바꿈

    ptr = &b;      // 포인터 ptr이 b를 바라보도록 변경

    cout << "변수 b의 값 : " << *ptr << endl;   // *ptr 이 b를 제대로 바라보고 있는지 확인, 그리고 줄바꿈

    return 0;                       // main 함수의 리턴값을 int 로 지정했기 때문에 0 반환
}
