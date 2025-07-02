#include <stdio.h>

/*
함수 포인터:
함수명은 함수 정의가 있는 메모리의 시작 위치입니다.
그렇기에 주소로 사용되며, 포인터에 저장하여 호출할 수 있습니다.
*/
int sum(int, int);  // 함수 선언

int main()
{
    int (*fp)(int, int);    // 함수 포인터 선언, 함수의 형태와 매개변수가 같아야함
    int res;                // 반환값을 저장할 변수

    fp = sum;               // 함수명을 함수 포인터에 저장
    res = fp(10, 20);       // 함수 포인터로 함수 호출
    printf("result: %d\n", res);

    return 0;
}

int sum(int a, int b)   // 함수 정의
{
    return (a+ b);
}
