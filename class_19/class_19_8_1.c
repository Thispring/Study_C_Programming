/*
분할 컴파일 방법:
C언어는 분할 컴파일을 통해 여러 개의 소스 코드를 각각 독립적으로 작성하고
컴파일할 수 있으며 컴파일된 개체 파일을 링크하여 하나의 큰 프로그램으로 만들 수 있습니다.

분할 컴파일 시 각 파일을 독립적으로 캄파일할 수 있도록 필요한 선언을 포함시켜야 합니다.
ex) printf를 사용하려면 stdio.h 헤더 파일을 포함해야함
*/

// 두 정수의 평균을 구하는 프로그램
#include <stdio.h>

void input_data(int *, int *);     // 두 정수를 입력하는 함수 선언
double average(int, int);           // 평균을 구하는 함수 선언

int main(void)
{
    int a, b;
    double avg;

    input_data(&a, &b);    // 두 정수 입력
    avg = average(a, b);    // 평균 계산
    printf("%d와 %d의 평균: %.1lf\n", a, b, avg);   // 입력값과 평균 출력

    //scanf("%d");    // exe 실행 시, 대기를 위한 임시 사용

    return 0;
}