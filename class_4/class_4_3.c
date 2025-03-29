#include <stdio.h>
// 형 변환 연산자
// (변환할 연산형태)피연산자
// 형 변환값은 따로 저장하지 않는다면 기존의 값에 저장되지 않음

int main()
{
    int a = 20, b = 3;
    double res;

    res = ((double)a) / ((double)b);
    printf("a = %d, b = %d\n", a, b);
    printf("a / b의 결과 : %.1f\n", res);

    a = (int)res;
    printf("(int) %.1f의 결과 : %d\n", res, a);

    return 0;
}