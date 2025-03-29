#include <stdio.h>
// 콤마 연산자는 왼쪽 부터 오른쪽으로 차례로 연산을 수행하며, 가장 오른쪽의 피연산자가 최종 결괏값이 된다.

int main()
{
    int a = 10, b = 20;
    int res;

    res = (++a, ++b);
    // 대입 연산자 보다 우선순위가 낮기 때문에 ++a가 수행되고 ++b 수행
    printf("a:%d, b:%d\n", a, b);
    printf("res:%d\n", res);

    res = (++b, ++a);

    printf("a:%d, b:%d\n", a, b);
    printf("res:%d\n", res);

    return 0;
}