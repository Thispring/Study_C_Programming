#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 문자열 전용 입출력 함수: gets, puts
int main(void)
{
    // gets 함수는 빈칸을 포함하여 한 줄 전체를 문자열로 입력(기존 scanf는 빈칸을 구분하여 입력 받음)
    // puts 함수는 gets와 짝을 이루는 문자열 출력 함수
    char str[80];
    printf("문자열 입력: ");    
    gets(str);  // 빈칸을 포함한 문자열 입력
    puts("입력된 문자열: ");
    puts(str);  // 배열에 저장된 문자열 출력

    return 0;
}