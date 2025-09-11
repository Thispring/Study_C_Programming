/*
열거형:
열거형은 변수에 저장할 수 있는 정수 값을 기호로 정의하여 나열합니다.
읽기 쉬운 코드를 만들기에 용이합니다.
*/
#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER}; // 열거형 선언

int main(void)
{
    enum season ss; // 열거형 변수 선언
    char *pc = NULL;    // 문자열을 저장할 포인터

    ss = SPRING;    // 열거 멤버의 값 대입
    switch (ss)     // 열거 멤버 판단
    {
    case SPRING:
        pc = "inline"; break;
    case SUMMER:
        pc = "swimming"; break;
    case FALL:
        pc = "trip"; break;
    case WINTER:
        pc = "skiing"; break;
    default:
        break;
    }
    printf("나의 레저 활동 => %s\n", pc);

    return 0;
}