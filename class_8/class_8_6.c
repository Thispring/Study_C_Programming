#include <stdio.h>

// 문자열 끝에 널 문자가 없는 경우
int main(void)
{
    char str1[5];

    str1[0] = 'O';
    str1[1] = 'K';
    printf("%s\n", str1);

    char str2[5];

    str2[0] = 'N';
    str2[1] = 'O';
    str2[2] = '\n'; // 널 문자
    printf("%s\n", str2);

    return 0;
}