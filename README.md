# C++ 수업을 위한 repository

## C++ 란
C 언어세 객체지향 문법요소를 넣어서 만든 프로그래밍 언어


주요 확장 내용
- 객체지향 프로그래밍: 클래스, 상속, 다형성, 동적 바인딩 등
- 일반화 프로그래밍: 템플릿
- 예외처리


2011년 이전 이후로 C++ 는 유용한 기능이 추가되었다.

### C++ 프로그램의 소스파일
- <b>소스프로그램 파일</b></br>
처리하고자 하는 작업을 수행하는 C++ 프로그램 명령어들을 담고 있는 파일</br>
확장자: '.cpp', '.cxx', 'C' 등을 사용


- <b>헤더 파일</b></br>
클래스, 함수의 원형, 매크로, 전역변수, 상수 등 여러 파일에 공토엊ㄱ으로 선언되는 내용을 담고있는 파일</br>
단독으로 컴파일되지 않고, #include 라는 선행처리기 지시어에 의해 소스 프로그램 파일에 삽입되어 함께 컴파일 됨</br>
확장자: '.h', '.hpp' 등을 사용함

소스 파일을 컴파일 하면 목적파일(오브젝트파일) 이라고 부른다.</br>
그리고 목적파일과 더불어서 라이브러리에 들어있는 기능을 결합해서 하나의 실행파일로 묶어주는 작업이 필요하다.</br>
이 작업을 링크라고 한다. (.exe 파일로 만드는 등 실행 프로그램 파일 생성)

위 과정을 전반적으로 '빌드' 한다 라고 말한다.


[필요한 도구]
- 소스 프로그램 및 GUI 등의 편집기(소스작성 목적)
- 컴파일러(컴파일 목적)
- 링커(링크 목적)
- 디버깅 도구(에러 처리 목적)

-> 위 필요한 도구를 한번에 제공하는 것이 통합개발환경(IDE) 라고 한다.


### 선행처리기
- C++ 프로그램을 컴파일 하기 전에 소스 프로그램을 가공하여 컴파일러가 실제로 번역할 소스 프로그램을 만드는 것


- 선행처리기 지시어로 처리를 지시함 ('#' 로 시작, 한 핸ㅇ에 한 개의 문장을 작성함)


- 대표적인 선행처리</br>
#include, #define, #undef, #if(#endif 와 짝을 이룸), #ifdef, #ifndef

### 문장
- 하나의 문장은 단어와 연산자, 숫자, 문자, 문자열, 문장 부호, 빈칸 등을 정해진 문법에 따라 나열하여 작성한다.
- 문자의 끝에는 세미콜론(;)을 기입하여 다음 문장과 구분한다.


### 블록
- 한개 이상의 문장을 중괄호({}) 안에 나열하여 묶어 놓은 것
- 여러 개의 문장을 하나의 문장처럼 취급하거나 함수의몸체를 구성하기 위해 사용됨


### 입출력 스트림

<b>std::cout 객체</b></br>
- 표준 출력 스트림 객체
- 데이터를 문자열로 변환하여 출력함
- 출력연산자(삽입연산자): <<
  
```
int a = 10;
std::cout << "a의 값은";
std::cout << a << "입니다". <<std::endl;
```

<b>std::cin 객체</b></br>
- 표준 입력 스트림 객체
- 문자열을 입력 변수의 자료형의 값으로 변환하여 입력함
- 입력연산자(추출연산자): >>

```
// 백생 공백 문자(빈칸, 탭, 새줄 문자)는 구분 문자로 취급함

int a;
char str[100];
std::cin >> a >> str;
```


### 명칭공간

<b>특정한 명칭들이 인식되는 프로그램의 부분</b></br>
- 다른 영역의 명칭 선언과 무관하게 명칭공간 내에서 자유롭게 명칭을 선언하여 사용할 수 있음
- 동일한 명칭이라도 서로 다른 명칭공간에서 정의되었다면 별개의 것으로 구분함 -> 여러 프로그래머들이 독립적으로 사용 가능
- 전역 명칭공간: 특정 명칭공간에 속하지 않는 기본 명칭공간
- std(standard) 명칭공간: 표준 C++ 라이브러리의 명칭들이 정의되어 있는 명칭공간

```
namespace myNSpc {
    int count; // 명칭을 선언하는 문장 나열
}

// 명칭공간 외부에서는 소속 명칭공간을 지정하여 사용
myNSpc::count = 0;
```

-> 'using' 을 이용한 명칭공간 사용</br>
특정 명칭공간이나 명칭공간 내의 특정 이름을 자주 사용하는 경우 명칭공간 지정을 간소화할 수 있음

```
using namespace std;
```


### 키워드와 식별자
- <b>키워드란?</b></br>
C++ 언어에서 미리 용도를 정해놓은 단어</br>
반드시 정해진 용도로만 사용해야 한다.


- <b>식별자란?</b></br>
여러가지 대상을 구분하기 위해 만든 이름(ex. 변수, 함수, 클래스 등의 이름)</br>


<b>식별자를 만드는 규칙</b>
- 첫 자는 비 숫자 문자를 사용한다(C++11 부터 다국어 문자 포함, 비숫자문자: 영문 대.소문자와 '_', MS C++ 에서는 '$' 포함)
- 이후의 문자는 비 숫자 문자와 숫자를 사용함(특수문자 사용 불가)
- 길이 제한은 없음
- 키워드는 식별자로 사용할 수 없음
- '_' 문자로 시작하는 이름은 사용하지 않는 것이 바람직함 (내부적으로 활용할 때 사용)

* Snake case: _ 를 사용(ex. my_name), Camel case: 소문자+대문자 조합(ex. myName), Pascal case: 대문자+대문자 조합(ex. MyName)


### 기본 자료형 및 상수와 변수
- <b>기본자료형</b></br>
정수자료형(int, char, short, ...), 실수자료형(float, double, long double, ...)
- <b>복합자료형</b></br>
배열, 구조체(struct), 클래스(class), 열거형(enum), 공용체(union), 포인터, 참조(C++ 에서 추가)


1. 정수자료형(integral types)
- 고정소수점 방식의 숫자표현(오버플로가 발생하지 않도록 주의해야 한다)
- 문자를 표현하는 자료형 => (char)
- 정수를 표현하는 자료형 => (int - 32bit, short - 16bit, long, long long, ...)
- signed(음수 표현 가능) or unsigned(음수 표현 불가능)
- 참/거짓 자료형 => (bool - true/false)
- 다국어 표현을 위한 자료형 => (wchar_t, char16_t, char32_t)

2. 실수자료형
- 부동소수점 방식의 숫자 표현
- float(4byte): 부호 1비트, 지수부 8비트, 가수부 23비트로 구성 (1.17549*10^-38 ~ 3.40282*10^38)
- double(8byte): 부호 1비트, 지수부 11비트, 가수부 52비트로 구성 (2.22507*10^-308 ~ 1.79769*10^308)

3. 정수형 리터널의 표현
- 숫자를 표현하는 문자와 부호만으로 표현
- 접두사를 이용한 진법의 표현 (ex. 0b- 2진수 int형 상수, 0- 8진수 int형 상수, 0x- 16진수 int형 상수)
- 접미사를 이용한 정수 리터럴의 자료형 지정 (ex. u- unsigned형, L- long형, ul- unsigned long형, ll- long long형)- 

4. 문자 리터럴의 표현
- 작은 따옴표(' ')안에 문자를 표기하는 방법
- 8진수나 16진수 문자 코드로 표기하는 방법 (ex. \숫자표현 - 8진수 표현방법, \x숫자 - 16진수 표현방법)

5. 실수형 리터럴의 표현
- 소수점이 있거나 10의 거듭제곱을 표현하기 위한 지수 기호인 'e' 가 있으면 실수형 리터럴임(ex. 12e2 = 12 * 10^2)

### 변수란 
- 프로그램이 실행되는 동안 기억하고 있어야 하는 값들을 저장하는 메모리 영역
- 변수에는 자료형과 이름이 지정되어야 함
- 모든 변수는 사용하기 전에 미리 선언해야 함

<b>변수의 초기화</b></br>
- 형식1: int total = 0; 의 형식 -> 처음 선언하자마자 값을 할당
- 형식2: int total(0); 의 형식
</br>=> 위 둘다 오차가 발생하지 않도록 적절한 값을 할당해야한다.
- 형식3: int total{0}; 의 형식 => 축소 변환을 허용하지 않아서 에러로 반환하여 빌드 전 에러처리 가능


<b>자료형 추론</b></br>
- 변수를 초기화할 때 초기화하는 값의 자료형으로 변수의 자료형을 추론함 (ex. auto i(10); -> int 로 추론)


<b>변수의 사용영역(scope)</b></br>
- 변수가 유효성을 갖는 영역


### const 와 constexpr

<b>const 한정어</b>
- 변수의 값을 수정할 수 없게함
- 초기화를 통해서만 값을 정할 수 있음 (ex. const double PI {3.14159);


<b>constexpr 한정어</b>
- 그 값을 컴파일할 때 평가한다는 의미
- 실행 중 값을 평가하는 것에 비해 효율적으로 동작할 수 있게 함
- 함수로 이용할 때 -> 모든 인수가 constexpr 인 경우 컴파일 할 때 값을 구할 수 있게 함

### 변수의 유효기간

- 변수가 언제 만들어져서 언제 없어지는가를 나타냄
- 자동변수 => 생성시점: 함수(블록)가 시작될 때, 소멸시점: 함수(블록)가 종료될 때
- 정적변수 => 생성시점: 프로그램이 시작될 때, 소멸시점: 프로그램이 종료될 때


### 연산자

- 2항 연산자: 4칙 연산자 (+, -, *, /)
- 나머지 연산자: 정수끼리에서만 사용가능! (%)
- 단항 연산자: 증감 연산자(++, --), 부호 연산자(+, -)
- 대입 연산자: 수식의 값(저장된 결과), 연산자의 결합 방향(우 -> 좌)
- 복합 대입 연산자: 이항 연산자와 대입 연산자를 결합(+=. -=, *=, /=, %=, <<=, >>=, ...)
- 관계 연산자(>, <, >=, <=, ==, !=) => return true/false
- 논리 연산자(논리합 ||, 논리곱 &&, 부정 !)
- 비트 단위 논리 연산자(논리 합 |, 논리곱 &, 배타적 논리합 ^, 부정~)
- 비트 이동 연산자</br>
좌측 이동(<<: 우측 피연산자에 지정된 비트 수만 큼 좌측 피연산자를 좌측으로 이동), 이 대 우측의 비는 비트에는 0이 채워짐
우측 이동(>>: 우측 피연산자에 지정된 비트 수 만큼 좌측 피연산자를 우측으로 이동), signed 형에 대해서는 부호를 유지할 수 있도록 부호 비트가 좌측의 비는 비트에 채움(구현에 따라 다름)
- 유일한 삼항 연산자: 조건 ? 값1 : 값2 -> 조건이 true 면 값1, false 면 값2


### 자료형의 변환

<b>묵시적 형 변환</b></br>
- 두 값 사이의 연산에서는 우선순위가 낮은 자료형의 값이 순위가 높은 자료형의 값과 같은 형으로 변환됨
- 여러 개의 연산으로 구성된 수식에서 묵시적 형 변환은 여산자 단위로 이루어짐
- 대입 연산자(=)는 값을 저장할 변수의 자료형으로 묵시적 형 변환을 함(이 때 오버플로를 주의해야 함)


<b>형 변환 연산자</b></br>
- static_case: 연관된 자료형 간의 형 변환을 처리하며, 변환 처리는 컴파일 단계에서 정해짐
- dynamic_case: 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함
- reinterpret_case: 관련이 없는 자료형 사이의 변환을 처리하는 연산자로, 포인터를 다른 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함 -> 어쩔 수 없이 해야할 때
- const_case: const 지정을 일시 해제함


### 흐름제어 구문
- 순차구조: 문장이 나열된 순서에 따라 차례로 실행되는 구조
- 조건제어구조: 지정된 조건에 따라 실행 흐름을 제어하는 구조(if문, switch문)
- 반복제어구조: 정해진 범위의 문장을 반복적으로 실행하게 하는 구조(for문, while문, do...while문)

### 구제체와 클래스
- 구조체란?</br>
여러 가지 자료형의 데이터 집합을 저장할 수 있는 새로운 자료형을 정의한 것

```
struct StructName {
    Type1 item1;
    Type2 item2;
};
```
- 구조체 데이터를 처리하는 함수</br>
C 언어에서는 구조체와 별개의 함수로 정의함

### 클래스
- 클래스란?</br>
표현하고자 하는 대상(객체)의 데이터(속성)와 함께 그 대상이 할 수 있는 동작을 나타내는 함수(행위)들을 묶어서 선언한 것 -> C 와 다른 점


### 클래스와 구조체의 차이점
- 구조체는 내부 데이터 항목들을 외부에서 자유롭게 사용하도록 공개하는 것이 디폴트이다. 반면 클래스의 경우는 내부의 구현을 감추는 것이 디폴트이다.
- 즉, 한정자(접근제어)가 구조체에서는 기본 public:이며 클래스에서는 private: 이다.


### 배열
- 동일한 자료형의 값을 여러 개 저장할 수 있는 연속적으로 할당된 공간을 묶어 하나의 이름을 갖는 변수로 만든 것
- 각각의 원소는 0번부터 시작하여 차례로 부여된 번호(첨자, 인덱스)를 이용하여 엑세스 함
- 배열의 차원: 배열의 첨자 개수


1차원 배열의 선언
```
float fArray[4]; // 0~3 번까지의 인덱스를 가짐
```


2차원 배열 : 1차원 배열이 원소인 배열
```
int Arr2D[4][3];
```

배열의 초기화
```
int a[4] = {1, 2, 3, 4};        // '=' 는 생략가능
int b[] = {1, 2, 3, 4, 5};      // 배열의 크기는 5
int c[2][4] = {                 // 2차원 배열의 초기화
    {1, 2, 3, 4},
    {5, 6, 7, 8}
}
```

### 포인터와 동적 메모리 할당

#### 포인터란?

- 어떠한 대상이 위치한 곳을 가리키는 주소를 저장하는 변수 (가리키는 대상: 포인터에 지정된 자료형에 해당되는 변수, 동적으로 할당된 메모리, 함수 등)
- 포인터 선언 형식

```
TypeNAme* ptrVar;

// TypeName: 가리킬 값의 자료형
// ptrVar: 포인터 변수의 이름
```

- 포인터가 유효한 대상을 가리키게 한 후 사용해야 함
```
ptrVar = &var;      // ptrVar 이 var 을 가리키게 함
*ptrVar = value;    // ptrVar 을 이용하여 var 을 엑세스

// &: 주소 계산 연산자
// *ptrVar: 포인터 ptrVar 가 가리키는 곳

int a;
int* iPtr = &a;
*iPtr = 10;
```


### 동적 메모리 할당

- 프로그램 동작 중에 기억공간의 필요성 및 소요량을 결정하여 필요한 공간을 할당하는 것
  - 기억공간의 생성 시점: new 연산자 실행 시점
  - 기억공간의 소멸 시점: delete 연산자의 실행 시점
  
- 포인터 변수가 할당된 기억 공간을 가리키게 함
* 일반적인 변수는 이름이 있으나, 동적으로 생성된 경우에는 이름이 없으므로 할당

```
// 할당
ptrVar = new TypeName;
ptrVar = new TypeName[n];

// 반납
delete ptrVar;
delete [] ptrVar;
```

- 단일 데이터 공간의 할당 및 반환
```
int* intPtr;
intPTr = new int;

*intPtr = 10;       // 메모리에 10 할당

...

delete intPtr;      // 메모리에서 삭제
intPtr = nullptr;   // 메모리 삭제 후에도, 전역변수인 경우에는 계속 살아있으므로, nullptr(C++ 11 이후 도입) 을 할당
```

- 배열 데이터 공간의 할당 및 반환
```
int* intPtr;
intPtr = new int[4];

*intPtr = 10;               // 순차적으로(0부터) 쌓임
*(intPtr + 1) = 20;           // 포인터 연산자가 먼저 실행되므로 괄호로 묶음
intPtr[2] = 30;             // 배열이므로 이와 같이 할당 가능

...

delete [] intPtr;           // 메모리 시스템 반납
intPtr = nullptr;           // 아무것도 가지고 있지 않음을 명시
```


### 참조

- 어떠한 대상을 가리키는 값(포인터와 유사함)
- 참조 변수는 참조 대상의 별명처럼 사용할 수 있음
- l-value 참조: 실체가 있는 대상(l-value)에 대한 참조

```
TypeName& refVar = varName;     // 참조는 무언가로 초기화가 무조건 필요하다(포인터와 다른점)

// TypeName: 참조 대상의 자료형
// refVar: 참조 변수의 이름
// varName: 참조 대상
```

- const 참조: 참조 변수가 참조하는 대상의 값을 바꿀수 없음
- r-value 참조: 사용한 후에는 그 값을 더 이상 가지고 있을 필요가 없는 대상을 참조 -> 객체의 값을 다른 객체로 이동할 때 활용한다(곧 값이 사라지는 대상에 대하여 참조)

### 참조가 포인터와 다른 점
- 참조 변수를 이용하여 값을 읽거나 저장할 때 참조 대상 변수를 사용하는 형식과 동일함
- 참조 변수는 초기화를 통해 반드시 어떤 대상을 참조해야 함
    - 초기화되지 않은 상태로 인해 무엇을 참조하고 있는지 알 수 없는 상황은 발생하지 않음
- 참조 변수는 초기화를 통해 지정된 참조 대상을 바꿀 수 없어 참조의 유효기간 동안 하나의 대상만 참조할 수 있음


## 함수

### 함수란?
- 특정 작업을 수행하는 프로그램 문장들을 하나의 단위로 모아 놓고 이름을 부여한 것
- 함수에 정의된 처리가 필요한 부분에서 호출하여 사용함
  - 매개변수를 통해 함수에서 처리할 데이터(인수)를 전달함
  - 호출된 함수로 이동하여 몸체 블록을 실행함
  - 정해진 처리를 한 후 결괏값을 반환할 수 있음(안할 수도 있음)
  - 함수의 실행을 완료하면 호출한 곳으로 복귀함
- C++ 프로그램은 함수를 기본 단위로 구성함

```
// 함수형태
ReturnType functionName(fParameterList)   // 머리부
{                                         // 몸체 블록
  Type1 localVar1;                        // 지역변수
  Type2 localvar2;
  
  ...
  
  statement1;                             // 처리할 작업을 수행하는 문장
  statement2;
  
  ...
  
  return returnExpression                 // 결괏값을 반환함
}

// fParameterList: 인수를 받기위한 형식 매개변수 선언
// ReturnType: 함수의 결과로 반환하는 값의 자료형
// returnExpression: 함수의 결과로 반환하는 값
```

- return 명령
  - 함수를 마치고 함수를 호출한 곳으로 복귀하는 명령
  - 함수 안의 어느 곳이든 복귀를 위해 사용할 수 있음
  - returnExpression 은 함수 머리부에 선언한 ReturnType 과 일치하는 자료형의 수식 또는 묵시적 형변환이 가능한 자료형의 수식을 사용함
  - 반환하는 값이 없는 함수의 ReturnType 은 void 로 선언함
  - main 함수에서는 return 명령을 만나지 않은 상태로 함수의 끝에 도달하면 `return 0;` 을 실행한 것과 같다.

### 함수의 순환 호출
- 함수를 정의하는 몸체블록 안에서 직접 또는 간접적으로 그 함수를 호출하도록 코드를 작성하는 것
```
// 팩토리얼 계산 함수의 순환 호출
int factorial(int n)
{
  if(n <= 1) return 1;
  else return n * factorial(n-1);
}
```

### 함수의 장점과 단점
- 장점
  - 크고 복잡한 프로그램을 작은 크기의 의미 있는 작업 단위로 분할하여 구성 -> 간결하고 이해하기 쉬운 프로그램을 작성 가능
  - 반복 사용되는 코드의 중복 방지
  - 잘 설계된 함수는 다른 응용에서 재사용할 수 있음
  
- 단점
  - 함수 호출과 복귀 과정에서 처리 시간이 추가됨 -> 매우 효율적으로 동작해야 하는 함수라면 inline 함수로 선언함


## 인수의 전달

### 인수

- 함수 호출 문장에서 함수에 전달하는 식(여러 개의 인수가 있을 경우 컴마로 구분)
- 매개변수를 통해 인수를 전달함
  1. 실 매개변수: 함수 호출 문장에서 함수의 형식 매개변수에 전달할 인수
  2. 형식 매개변수: 인수를 전달받기 위해 함수에 선언된 매개변수, 함수 헤더에 매개변수의 자료형과 이름을 선언

### 인수 전달 방식
- 값 호출: 실매개변수의 값을 형식 매개변수에 복사하는 방식
  - 실 매개변수와 형식 매개변수는 별개의 데이터이므로 불필요한 부작용이 발생하지 않음
  - 구조체와 같이 많은 양의 데이터로 구성된 인수를 전달할 경우 데이터의 복사량이 많아짐
- 참조 호출: 실 매개변수의 참조를 형식 매개변수에 전달하는 방식
  - 함수에서 처리할 결과를 매개변수를 통해 받아오려는 경우 -> 함수에서 형식 매개변수의 값을 변경하는 것은 실 매개변수의 값을 변경하는 것과 같음
  - 많은 양의 데이터로 구성되는 구조체나 객체와 같은 인수를 함수에 효율적으로 전달하는 경우 -> 형식 매개변수에 복사되는 데이터의 양은 실 매개변수의 크기와 관계없이 일정함


- 참조 호출을 통한 효율적인 인수 전달
  - 많은 양의 데이터로 구성되는 구조체나 객체를 인수로 전달하는 경우 값 호출을 사용하는 것에 비해 참조 호출을 사용하는 것이 효율적임
  - 함수 호출의 효율성을 위해 참조 호출을 하지만 실 매개변수의 값이 변경되는 것을 원하지 않는 경우에는 형식 매개변수에 const 한정어를 지정하여 실 매개변수 보호 가능


### 디폴트 인수
- 인수의 디폴트 값을 지정하는 방법</br>
일반적으로 사용되는 디폴트 값이 있는 인수의 경우 함수를 정의할 때 그 값을 미리 지정할 수 있음
```
istream& getline(char* str, int count, char delimiter='\n');

char str1[10]. str2[10];
cin.getline(str1, 10, ','); // ',' 가 나올 때 까지 최대 9개 입력
cin.getline(str2, 10);      // 3번째 인수 값을 지정하지 않았으므로 디폴트 값인 \n 을 사용
```
- 이 때 디폴트 인수는 인수 중 끝에만 위치할 수 있다.
```
void f(int x, int y = 10, int z = 100); <- 가능
void g(int x, int y = 10, int z);       <- 오류
```


## 함수의 다중정의

### 다중정의란?
동일한 이름에 대하여 여러가지 의미를 부여하는 것


함수 다중정의
- 동일한 이름을 갖는 함수를 여러 개 정의하는 것
- 동일한 개념의 처리를 여러 가지 데이터나 객체에 대해 각각의 대상에 맞는 처리를 해야 할 경우 사용함
- 다중정의된 함수의 구분: 인수의 개수 및 자료형 (함수의 반환 자료형으로 함수를 구분할 수 없음) <- 시그니처로 구분
- 모호한 함수 다중정의를 주의해야한다

## inline 함수
- 함수 호출 절차를 따르지 않고 함수 호출 위치에 함수의 처리 문장이 삽입되게 번역하도록 선언된 함수
- 함수를 사용함으로써 얻을 수 있는 모듈화의 장점을 살리면서, 함수 호출에 따른 부수적인 처리시간이 생략됨
- 함수 호출 루틴으로부터 함수로 넘어가는 부분의 코드 최적화가 가능해짐 -> 매우 빈번히 호출되며 빠른 실행이 요구되는 함수를 inline 함수로 선언하면 성능을 높이는데 도움이 됨
- 단, inline 함수로 선언하더라도 반드시 inline 으로 번역되는 것은 아님 (아래 경우는 inline 선언 무시)
  - 함수가 너무 큰 경우
  - 순환 호출을 하는경우
  - 프로그램 내에서 그 함수에 대한 포인터를 사용하는 경우


## 클래스와 객체

### 클래스 선언과 객체 정의
- 객체: 소프트웨어 시스템 안의 어떠한 대상을 표현한 것으로,
  - 정해진 처리를 수행할 수 있음 -> 행위, 메소드, 멤버함수
  - 처리 과정에 따라 내부 상태가 변화할 수 있음
  - 다른 객체와 상호작용 할 수 있음

- 클래스란
  - 객체의 설계도
  - 객체가 포함할 데이터 멤버의 선언과 멤버함수의 정의를 포함함

- 클래스 선언문의 형식
```
class ClassName {
  가시성_지시어_1:
    데이터 멤버 선언;
    멤버함수 선언;      // 원형 선언 또는 멤버함수 정의 -> 원현 선언만 하고 후에 정의 가능
  가시선_지시어_2:
    데이터 멤버 선언;
    멤버함수 선언;      // 원현 선언 또는 멤버함수 정의
  ...                // 가시성은 여러개로 지시 가능
};
```

- 가시성 지시어 종류</br>
클래스의 멤버가 공개되는 범위를 나타냄
  - private: (디폴트) 소속 클래스의 멤버함수, **친구 클래스의 멤버함수 및 친구함수**만 사용가능 그 외에는 비공개이다.</br>
    정보은닉 용도, 클래스의 구현을 위한 내부상태는 일반으로 private 로 지정한다
  - public: 전 범위에서 사용 가능</br>
    주로 외부에 제공할 인터페이스를 공개하기 위해 사용됨


- 캡슐화: 객체 내부의 상세한 구현 부분과 외부 사용자의 관점을 분리함</br>
  객체 외부에서 객체 내부에 구현된 함수, 기능은 직접 사용을 불허하므로, 공개된 함수를 통한 간접적 사용을 허용한다(공개된 함수/ 공개된 인터페이스)


- 객체 정의 형식
```
ClassName objName;
ClassName objName1, objName2, ....;
```


- 객체 사용 형식
  - 객체 이름에 멤버선택 연산자(.)를 사용하여 객체의 멤버를 엑세스함
  - 객체의 멤버함수 안에서 그 객체에 속한 멤버를 사용할 때는 멤버 이름만으로 엑세스함
```
cin >> objName.dataMember;
objName.memFunc(....);
```
  
- const 멤버함수</br>
데이터 멤버의 값을 수정하지 않는 멤버함수

- 소스파일의 구성</br>
클래스로 선언한해더파일과 cpp파일을 따로 만들어서 cpp 파일에서 include 하여서 사용함


### 생성자
- 객체가 생성될 때 수행할 작업을 정의하는 특수한 멤버함수
- 생성자에 인수를 전달할 수 있도록 매개변수를 선언할 수 있음
- 생성자를 여러 개 다중정의할 수 있음

**특성**
- 클래스의 이름을 사용하여 선언함
- 생성자 머리에 반환 자료형을 표시하지 않으며, return 명령으로 값을 반환할 수 없음
- 생성자를 public 으로 선언해야 클래스 외부에서 객체를 생성할 수 있음
```
class ClassName {
  ...
  public:
    // 생성자 영역
    ClassName(fParamList) {
      ... // 객체 생성을 위한 준비 작업
    }
};
```

### 초기화 리스트
- 생성자의 머리에 데이터 멤버를 초기화하는 값들을 나열한 리스트
- '데이터멤버이름{초깃값}' 형태로 초깃값을 지정
```
class Counter {
  int value;
public:
  Counter() : value {0} { ... }   // 생성자에서 초기화
}
```


### 소멸자
객체가 소멸될 때 수행할 작업을 정의하는 특수한 멤버함수

**소멸자의 특성**
- 클래스의 이름에 '~' 를 붙여 선언함
- 소멸자 머리에 반환 자료형을 표시하지 않으며, return 명령으로 값을 반환할 수 없음
- 매개변수가 없으며, 클래스에 하나의 소멸자만 정의할 수 있음
- public 으로 선언하는 것이 일반적임
- 상속을 통해 파생 클래스를 정의하는 경우 virtual 을 지정하여 가상함수가 되도록 하는 것이 좋음


### 디폴트 생성자
- 매개변수가 없는 생성자, 또는 모든 매개변수에 디폴트 인수가 지정된 생성자
- 클래스를 선언할 때 생성자를 선언하지 않으면 컴파일러는 묵시적으로 디폴트 생성자를 정의함(묵시적 생성자는 아무 동작하지 않는다)
- 생성자를 선언하게 되면 묵시적 디폴트 생성자를 생성되지 않음


### 복사 생성자
- 동일 클래스의 객체를 복사하여 객체를 만드는 생성자
- 묵시적 복사 생성자: 객체의 데이터 멤버들을 그대로 복사하여 객체를 만들도록 묵시적으로 정의된 복사 생성자
```
class ClassName {
  ...
public:
  ClassName(const ClassName& obj) {
    ... // 생성되는 객체에 obj 를 복사하는 처리
  }
}
```


## 이동 생성자
- 자원을 이동시키는 것, 불필요한 복사의 비효율성을 개선하기 위해서 사용
- rvalue 참조로 전달된 같은 클래스의 객체의 내용을 이동하여 객체를 만드는 생성자
- 선언 형식
```
class ClassName {
public:
    // const 로 선언하지 않아도 원본 훼손 x
    className(ClassName&& obj) {
        ...
    }
}
```

### rValue 참조
전통적 의미의 lvalue 와 rvalue => 할당되는 값 lvalue, 할당(전달)하는 값 rvalue

- '&' 기호로 선언하는 lvalue 와 달리 rvalue 참조는 '&&' 기호로 선언한다.
- lvalue 참조와 rvalue 참조의 사용 예
```
VecF v1(3), v2(3);

VecF& vLRef = v1;             // lvalue 참조로 lvalue 를 참조함
int& a = 10;                  // 오류: lvalue 참조로 rvalue 를 참조할 수 없음
const int& b= 20;             // 상수 lvalue 참조로는 rvalue 를 참조를 할 수 있음
int&& c = 30;                 // rvalue 는 rvalue 참조로 참조할 수 있음
VecF&& vRRef1 = v1.add(v2);   // 함수의 반환 객체는 rvalue 임
VecF&& vRRef2 = v2;           // 오류: rvalue 참조로 lvalue 를 참조할 수 없음
```


### static 데이터 멤버와 static 멤버함수
- 객체를 저장하기 위한 메모리 공간
- static 데이터 멤버
  - 클래스에 속하는 모든 객체들이 공유하는 데이터 멤버
  - 객체 생성과 관계없이 프로그램이 시작되면 static 데이터 멤버를 위한 메모리 공간이 할당됨
  - 일반 데이터 멤버와는 달리, static 데이터 멤버는 클래스 선언문 내에서는 선언만 하고 클래스 외부에서 별도로 정의해야 함
-  static 멤버 함수
  - 특정 객체에 대한 처리를 하는 것이 아닐, 소속 클래스 단위의 작업을 수행하는 함수
  - static 멤버함수는 객체가 정의되지 않아도 사용할 수 있음
  - static 멤버함수 안에서는 일반 멤버르 사용할 수 없으며, static 멤버만 사용할 수 있음


### 스택 (LIFO)
- 데이터를 저장하는 자료구조의 하나
- 스택의 기본 연산
  - push: 데이터를 저장
  - pop: 마지막으로 저장한 데이터를 가져옴


### 복소수(complex number)
- 실수부(real part)와 허수부(imaginary part)로 구성되는 수
- 복소수의 표현: a + jb
  - a: 실수부의 값
  - b: 허수부의 값
  - j는 허수단위로서 j^2 = -1 임
- 켤레 복소수
  - 허수부의 부호가 반대인 복소수
  - a + jb 의 켤레복소수는 a - jb임


### 복소수 연산
- 덧셈(뺄셈): 실수부의 합(차)과 허수부의 합(차)을 각각 구함
  - (a + bj) + (d + je) = (a + d) + j(b + e)
  - (a + bj) - (d + je) = (a - d) + j(b - e)
- 곱셈
  - (a + bj)(d + je) = (ad - be) + j(ae + bd)
- 나눗셈
  - a + jb / d + je = {(ad + be) / (d^2 + e^2)} + {(be - ae) / (d^2 + e^2)}

## 심화학습

### 위임 생성자의 선언
- 멤버 초기화 리스트에 클래스의 다른 생성자를 사용하여 새로운 생성자를 선언할 수 있음
  - 위임생성자: 클래스의 다른 생성자를 이용하여 선언되는 생성자
  - 타겟 생성자: 위임의 대상이 되는 생성자
- 생성자를 작성하는 코드의 중복을 줄일 수 있음

### 초기화 리스트 생성자
- 첫번째 매개변수가 std::initializer list<Type> 인 생성자
  - 지정된 자료형의 값들을 { } 안에 나열한 리스트
  - 헤더파일: #include <initializer _list>
  