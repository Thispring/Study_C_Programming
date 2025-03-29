#include <stdio.h>
// 명시적 형변환 (내가 지정)
// 묵시적 형변환 (컴퓨터가 판단) -> ex)int * dobule = res

int main()
{
    double a;
    double b;
    int c;
    int d;

    a = 5.0 / 2.0; // 실수와 실수의 나누기 연산
    // b = 5.0 % 2.0; //실수와 실수 나머지 연산은 불가능
    c = 5 / 2; // 정수와 정수 나누기 연산
    d = 5 % 2; // 정수와 정수 나머지 연산

    printf("a: %.1lf\n", a);

    printf("c: %d\n", c);
    printf("d: %d\n", d);

    return 0;
}