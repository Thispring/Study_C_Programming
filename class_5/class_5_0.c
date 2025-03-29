#include <stdio.h>

int main()
{
    int a = 10;
    int b = 0;

    if (a > 11 && b == 0) // 조건식, 1번째로 조건 판단
    {
        printf("hello\n");    // 실행문
    }   // 중괄호를 생략하고 실행이 가능하나, Dangling else 문제(if문이 중첩된 경우 else를 가장 가까운 if와 연결하는 문제)가 발생할 수 있다.
    else if (a == 11 || b == 1)    // if가 거짓이면 2번째로 조건 판단
    {
        if (b < -1) // if문은 중첩해서 사용 가능, 들여쓰기하여 가독성 주기
        {   
            printf("world\n"); 
        }   
    }
    else    // if와 else if 모두 거짓이면 else의 실행문 실행
    {
        printf("helloWorld\n"); 
    }

    return 0;
}