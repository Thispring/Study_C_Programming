#include <stdio.h>

int main ()
{
    /*
    printf("Be happy");
    printf("My friend");
    */

    printf("%d을 %d로 나누면 %lf입니다.", 1, 2, 0.5); // %0.1lf은 소수점 첫 번째 자리, 그게 없으면 6자리까지 출력
    printf("\n");
    printf("Be\rHappy!\nBaby"); // \r로 인해 커서가 B앞으로 이동하여 Happy가 출력되어 Be가 지워진다.
    return 0;
}