#include <stdio.h>

int main()
{
    char ch1 = 'A'; // 문자로 초기화
    char ch2 = 65; // A의 아스키 코드 값

    printf("문자 %c의 아스키 코드 값: %d\n", ch1, ch1); // %c는 문자 출력
    printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2); // %d는 정수 출력

    return 0;
}