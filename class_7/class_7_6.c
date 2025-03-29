#include <stdio.h>
// 재귀호출 함수는 자기 자신을 호출하는 함수
// 함수 안에 자신을 호출하여 사용

void fruit(int count);

int main(void)
{
    fruit(0);   // 괄호 안에 인수 등록

    return 0;
}

void fruit(int count)   // 호출 횟수를 매개변수에 저장
{
    printf("apple\n");
    if (count == 3)return;  // 조건문을 통해 재귀함수 무한반복 종료
    fruit(count + 1);    // 자기 자신 다시 호출
}