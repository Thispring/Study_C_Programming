#include <stdio.h>

// 부분 배열 활용
// 포인터를 활용하여 배열의 중간 부분 요소만 활용할 수 있다.
int main(void)
{
    int ary[5] = { 10, 20, 30, 40, 50 };
    int *p = ary + 2; // 배열의 세 번째 요소부터 시작

    for (int i = 0; i < 3; i++)
    {
        printf("p[%d] = %d\n", i, p[i]);    // p[0]은 ary[2]와 같음
    }

    return 0;
}