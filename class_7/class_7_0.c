#include <stdio.h>
// 함수정의: 함수를 실제 코드로 만드는 것이며 기능을 구현
// 함수호출: 함수 사용을 위해 함수 호출
// 함수선언: 프로그램 상단에서 어떤 함수를 사용할 것이라고 컴파일러에 정보를 주는 역할, 컴파일러는 위에서 한줄씩 읽어 미리 형태에 맞는 데이터 공간 확보

int sum(int a, int b);  // sum 함수 선언, int a와 int b는 매개변수 역할
// 매개변수는 함수가 처리할 데이터를 저장하는 변수, 함수명 옆 괄호 안에 선언

int main(void)
{
    int result; 
    result = sum(10, 5);    // 함수 호출, sum의 괄호 값은 인수, 인수는 매개변수로 변환 a = 10, b = 5
    printf("%d\n", result);
    return 0;
}

int sum(int a, int b)  // sum 함수 정의 시작
{
    int res;

    res = a + b;    // 매개변수 a, b의 합을 res에 저장, 매개변수는 호출 시 받은 값

    return res; // 함수 반환 값으로 res을 반환
}