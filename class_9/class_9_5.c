#include <stdio.h>

// 포인터는 해당 메모리의 시작 주소 값을 가지고 있기 때문에, 형태가 달라도 크기가 같다. 
int main(void)
{
    char ch;
    int in;
    double db;

    // 포인터 변수 초기화
    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    // 각 변수들의 주소(&를 활용해서)의 크기 구하기
    printf("char형 변수의 주소 크기: %d\n", sizeof(&ch));
    printf("int형 변수의 주소 크기: %d\n", sizeof(&in));
    printf("double형 변수의 주소 크기: %d\n", sizeof(&db));
    // 포인터 변수를 이용해 포인터의 크기 구하기
    printf("char * 포인터의 크기: %d\n", sizeof(pc));
    printf("int * 포인터의 크기: %d\n", sizeof(pi));  
    printf("double * 포인터의 크기: %d\n", sizeof(pd));
    // *(간접 참조 연산자)를 이용한 포인터(주소)에 있는 변수의 크기 구하기
    printf("char * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pc));
    printf("int * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pi));
    printf("double * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pd));
    
    return 0;
}