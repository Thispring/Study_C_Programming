#include <stdio.h>

/*
함수 포인터의 활용:
함수 포인터는 형태가 같은 다양한 기능의 함수를 선택적으로 호출할 때 사용합니다.
*/
// 함수 포인터로 원하는 함수를 호출하는 프로그램

void func(int (*fp)(int, int)); // 함수 포인터를 매개변수로 갖는 함수
int sum(int a, int b);          // 두 정수를 더하는 함수
int mul(int a, int b);          // 두 정수를 곱하는 함수
int max(int a, int b);          // 두 정수 중에 큰 값을 구하는 함수

int main()
{
    int sel;    // 선택된 메뉴 번호를 저장할 변수

    printf("01 두 정수의 합\n");
    printf("02 두 정수의 곱\n");
    printf("03 두 정수 중에서 큰 값 계산\n");
    printf("원하는 연산을 선택하세요: ");
    scanf("%d", &sel);

    switch (sel)
    {
    case 1: func(sum); break;   // 1이면 덧셈 기능
    case 2: func(mul); break;   // 2이면 곱셈 기능
    case 3: func(max); break;   // 3이면 큰 값 구하는 기능
    }

    return 0;
}

void func(int (*fp)(int, int))
{
    int a, b;   // 두 정수를 저장할 변수
    int res;    // 함수의 반환값을 저장할 변수

    printf("두 정수의 값을 입력하세요: ");
    scanf("%d%d", &a, &b);  // 두 정수 입력
    res = fp(a, b);         // 함수 포인터로 가리키는 함수를 호출
    printf("결과값은 : %d\n", res); // 반환값 출력
}

int sum(int a, int b)   // 덧셈 함수
{
    return(a + b);
}

int mul(int a, int b)   // 곱셈 함수
{
    return(a * b);
}

int max(int a, int b)   // 큰 값을 구하는 함수
{
    if (a > b) return a;
    else return b;
}