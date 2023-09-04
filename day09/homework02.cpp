#include <iostream>     // 선행처리기로, 표준 라이브러리에서 iostream 을 가져오겠다는 의미
using namespace std;    // using 지시어를 사용하여 std namespace 안에 선언된 모든 요소를 해당 코드 전역에서 사용하도록 설정

int homework02() {            // int 형 데이터를 반환하는 main 함수 선언
    int data[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};  // 10개의 int 형 값을 가지는 배열을 data 라는 이름으로 선언
    int max = data[0];  // max 라는 int 형 변수에 data 배열의 0번 째 인덱스 값을 할당

    cout << "데이터: " << data[0]; // "데이터: " 문자열을 출력 한 후에 같은 라인에 data 배열의 0 번 째 값 먼저 출력
    for(int i = 1; i < 10; i++) {   // i 가 1부터 시작하여 10보다 작은 경우 스코프 내 프로세스를 걔속해서 실행하라는 의미 (9번 실행예상)
        cout << " " << data[i];     // 빈 문자열 " " 을 출력한 후에, i 값 인덱스에 해당하는 data 배열 값을 출력
        if(max < data[i])           // 만약 data[i] 값이 max 보다 큰지 아닌지 점검
            max = data[i];          // 만약 data[i] 가 max 보다 크다면 max 값에 data[i] 값을 할당
    }                               // for 문 끝
    cout << endl << endl;           // 출바꿈을 두번 실행함
    cout << "배열의 최댓값: " << max << endl; // "배열의 최댁값: " 문자열을 먼저 출력한 후, max 할당된 값 출력, 그리고 줄바꿈
    return 0;                       // main 함수의 리턴값을 int 로 지정했기 때문에 0 반환
}
