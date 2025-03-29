#include <stdio.h>
// 정수형 변수

int main()
{
    short sh = 32767;
    int in = 2147483647891;
    long ln = 2147483647123456789;
    long long lln = 2147483647214748364;
    // long long llnn = 21474836472147483645; // 정수 상수가 너무 큽니다. 오류 발생

    printf("short 변수 출력: %d\n", sh);
    printf("int 변수 출력: %d\n", in);
    printf("long 변수 출력: %ld\n", ln); // long형 ld로 출력
    printf("long long 변수 출력: %lld\n", lln); // long long형 lld로 출력

    return 0;
}