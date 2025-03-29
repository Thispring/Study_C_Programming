#include <stdio.h>

// 문자를 저장하는 배열(char형 배열)
// char 배열 선언 시 주의 점
// 1. 배열의 크기는 최대한 넉넉하게 선언
// 2. 배열 요소의 개수는 최소한 '문자열 길이+1'이어야 함
int main(void)
{
    char str1[20] = "apple"; // 문자열 상수로 한 번에 초기화
    char str2[10] = {'a', 'p', 'p', 'l', 'e'};  // 문자 상수로 하나씩 초기화

    printf("새로운 문자열 입력: ");
    scanf("%s", str1);   // 새로운 문자열 입력

    printf("%c\n", str1[0]);
    printf("%c\n", str2[0]);
    printf("%c\n", str2[8]);    // 문자 배열의 남은 공간은 \n(null 문자)로 채워짐
    printf("%s\n", str1);

    return 0;
}