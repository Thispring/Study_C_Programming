#include <stdio.h>
// 재귀호출 함수는 자기 자신을 호출하는 함수
// 함수 안에 자신을 호출하여 사용

void fruit(void);

int main(void)
{
    fruit();

    return 0;
}

void fruit(void)
{
    printf("apple\n");
    fruit();    // 자기 자신 다시 호출
}

// 위 재귀호출 함수는 무한반복 됨, 반복 시 기존 함수 안에서 반복이 아닌 새로운 함수를 만들어서 반복
// 위 방식으로 인해 메모리를 모두 사용하면 강제종료