#include <stdio.h>
// 관계 연산자, 논리 연산자의 결과값은 true일 경우 1, false일 경우 0 출력 

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    int res;

    res = (a > b);
    printf("a > b: %d\n", res);
    res = (a <= b);
    printf("a < b: %d\n", res);

    res = (c > 10) && (c < 20);
    printf("(c > 10) && (c < 20): %d\n", res);
    res = (b > 10) && (c++ > 30);
    printf("(c < 10) || (c > 30): %d\n", res);
    res = (a > 0) || (c-- < 29);
    printf("(a > 0) || (c-- < 29): %d\n", res);    
    // 숏 서킷 룰: 불필요한 연산을 줄이기 위한 룰, 용량보다는 성능을 우선 시 하기 때문
    // AND연산자일 경우 거짓일 경우 후앙이 관계없이 결과가 거짓
    // OR연산자일 경우 좌항이 참이면 우항은 실행되지 않음

    return 0;
}