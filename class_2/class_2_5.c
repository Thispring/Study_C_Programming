#include <stdio.h>

int main ()
{
    printf("%d\n", 12); // 10진법 0~9
    printf("%d\n", 014); // 8진법 0~7
    printf("%d\n", 0xc); // 16진법 0~9 + a~f (a=10)

    // 2진수로는 표현할 수 없음 ex)1100은 이진수가 아닌 1100(천백)이라는 숫자로 컴퓨터는 인식
    return 0;
}