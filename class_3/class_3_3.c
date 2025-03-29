#include <stdio.h>
// 실수형 변수
// 실수형 변수의 유효 숫자(클수록 더 정확하게 표현) 확인

int main()
{
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;
    long double ldb = 1.234567890123456789012345; // long double은 컴파일러에 따라 차이가 존재

    printf("float형 변수의 값: %.20f\n", ft); // 소수점 20자리까지 출력
    printf("double 변수의 값: %.20lf\n", db);
    printf("long double 변수의 값: %.25Lf\n", ldb);

    return 0;
}