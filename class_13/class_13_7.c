#include <stdio.h>

/*
함수끼리 데이터를 공유하는 방법 중
'주소를 반환하는 함수 만들기'
*/
int *sum(int a, int b);

void sub();

int main()
{
    int *resp;  // 반환값을 저장할 포인터

    resp = sum(10, 20);
    sub();  // 운영체제 따라 *sum 함수에서 값이 없어진 res 주소를 다른 변수의 값으로 임의 할당 할 수 있다.
    printf("두 정수의 합: %d\n", *resp);

    return 0;
}

int *sum(int a, int b)
{
    //static int res;     // 정적 지역 변수로 선언해야 main 함수에 변수 값을 제대로 반환 할 수 있습니다.
    int res;  // auto 지역 변수의 경우 *sum함수가 끝나면, 운영체제에서 주소만 반환하고, 값을 전달하지 않는다. 
    res = a + b;

    return &res;    // res의 주소를 반환
}

void sub()
{
    int a = 999;
}
/*
주소 반환 함수 주의점
1. 반환값의 자료형은 반환값을 저장할 포인터의 자료형과 같아야 합니다.
2. 지역 변수의 주소를 반환해서는 안 됩니다.
*/