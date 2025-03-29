#include <stdio.h>
// const를 사용하는 변수는 초기화된 값을 변경할 수 없음
// 선언과 동시에 초기화 -> 그렇지 않으면 쓰레기 값이 사용됨

int main()
{
    int a = 0;
    const int b = 1;

    a = 1;
    // b = a + 1;
    // 오류: 식이 수정할 수 있는 lvalue여야 합니다.

    printf("a의 값: %d\n", a);
    printf("b의 값: %d\n", b);

    return 0;
}