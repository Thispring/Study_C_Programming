#include <stdio.h>
// sizeof 연산자는, 피연산자의 바이트 단위를 계산해서 알려준다.
// 피연산자는 변수, 상수, 수식, 자료형 등이 될 수 있음

int main()
{
    int a = 10;
    double b = 3.4;

    printf("int형 변수의 크기: %d\n", sizeof(a));
    printf("double형 변수의 크기: %d\n", sizeof(b));
    printf("각 수식 결괏값 변수의 크기: %d\n", sizeof(1.5 + 3.4));

    return 0;
}