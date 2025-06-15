#include <stdio.h>

/*
이중 포인터 개념:
포인터도 메모리에 저장 공간을 갖는 하나의 변수입니다. 따라서 주소 연산으로 포인터의 주소도 구할 수 있습니다.
이중 포인터를 이용하면, 포인터 변수를 포인터에 저장할 수 있습니다.
*/
int main()
{
    int a = 10;
    int *pi;    // 포인터 선언
    int **ppi;  // *을 두개 붙여, 이중 포인터 선언

    pi = &a;    // int형 변수의 주소를 저장한 포인터
    ppi = &pi;  // 포인터의 주소를 저장한 이중 포인터

    printf("변수    변숫값      &연산       *연산       **연산\n");
    printf(" a%10d%10u\n", a, &a);
    printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
    printf(" ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);

    return 0;
}