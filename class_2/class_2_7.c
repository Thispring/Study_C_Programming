#include <stdio.h>
// null 문자 = \0, 제어문자
// 문자와 문자열은 메모리에 저장되는 방식이 다르다
int main()
{
    printf("%c\n", 'A'); // 문자상수 4byte
    printf("%s\n", "A"); // 문자열상수
    printf("%c은 %s입니다.\n", '1', "first");

    return 0;
}