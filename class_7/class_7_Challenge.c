/*
도전1:
1부터 10까지의 합 계산(재귀호출 사용)
1부터 일정 수(n)까지의 합을 재귀호출을 사용해서 작성해보세요.
1부터 일정 수(n)까지의 합을 구하는 재귀호출 함수를 만들고 호출하여 구현합니다.
함수명은 다음과 같이 작성합니다.

int rec_func(int n);    // 1부터 n까지의 합을 반환하는 함수
*/

// TODO: 전역변수 없이 동작하도록 작성하기
// HINT:
/*
기저 조건 (Base Case): 더 이상 재귀할 필요가 없는 조건
재귀 단계 (Recursive Step): 문제를 더 작은 부분으로 나누기

매개변수를 활용: 재귀 호출 시 값을 전달하여 상태를 유지할 수 있습니다
반환값을 활용: 각 재귀 호출의 결과를 누적할 수 있습니다
스택 구조 이해: 재귀는 내부적으로 스택을 사용하므로, 각 함수 호출이 스택에 쌓였다가 역순으로 계산됩니다

https://targetcoders.com/%EC%9E%AC%EA%B7%80%ED%95%A8%EC%88%98-%EC%98%88%EC%A0%9C-%EC%9D%B4%ED%95%B4%ED%95%98%EA%B8%B0/
*/
#include <stdio.h>

int rec_func(int n);

int main(void)
{
    int inputNum = 0;
    int res = 0;

    printf("Input Number:\n");
    scanf("%d", &inputNum);
    res = rec_func(inputNum);

    printf("Result: %d", res);

    return 0;
}

int rec_func(int n)
{
    if (n == 1)
        return n;

    printf("n: %d\n", n);
    return n + rec_func(n-1);
}
