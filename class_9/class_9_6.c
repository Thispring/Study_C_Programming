#include <stdio.h>

/*
포인터의 대입 규칙
규칙1: 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 합니다.
규칙2: 형 변환을 사용한 포인터의 대입은 언제나 가능합니다.
*/
int main(void)
{
    double b = 3.4; 
    double *pq = &b;    // double형 포인터 변수
    int *pi;    // int형 포인터 변수
    pi = (int *)pq; // int형인 pi에 값을 대입하기 위해 (int *)으로 int 형변환
    printf("%d\n", *pi);

    int a = 10;
    int *p = &a;    // int형 포인터 변수
    double *pd; // double형 포인터 변수

    // double형 포인터 변수에 int형 포인터 변수를 대입하려는 상황
    pd = p;
    printf("%lf\n", *pd);   // *pd로 a의 값 간접 참조
    // 서로 다른 형태로 인해 할당된 영역이 아닌 할당되지 않은 영역까지 사용하게 되어 경고를 띄움

    return 0;
}