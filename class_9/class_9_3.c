#include <stdio.h>

// 포인터를 사용한 정수 합과 평균 계산
int main(void)
{
    int a = 10, b = 15, total;
    double avg;
    int *pa, *pb;   // 포인터 동시 선언
    int *pt = &total;   // 포인터 선언과 초기화, &을 사용해 주소값 사용
    double *pg = &avg;  // double형 포인터 선언과 초기화

    pa = &a;    // 포인터pa에 a주소 대입
    pb = &b;    // 포인터pb에 b주소 대입

    *pt = *pa + *pb;    // a+b의 값을 더해 total에 저장, *pt는 공간,  *pa + *pb는 값
    *pg = *pt / 2.0;    // total(pt) 값을 2로 나눠 avg(pg)에 저장
    
    printf("두 정수의 값: %d, %d\n", *pa, *pb); // *연산자를 통해 pa가 가리키는 a주소에 있는 값 출력
    printf("두 정수의 합: %d\n", *pt);
    printf("두 정수의 평균: %.1lf\n", *pg);

    return 0;
}