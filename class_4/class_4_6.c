#include <stdio.h>
// 조건 연산자: (a > b) ? a : b
// (a > b)는 조건이며 ? 다음에 비교할 값 지정
// 조건의 a가 true이면 a를 출력, b가 true이면 b를 출력 (그 반대로 false일 때 반대 값 출력)

int main()
{
    int a = 10, b = 20, res;

    res = (a > b) ? a : b;
    printf("큰 값: %d\n", res);

    return 0;
}