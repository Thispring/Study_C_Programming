#include <stdio.h>

/*
도전1:
전역 변수 교환 프로그램
2개의 전역 변수에 값을 입력하고 교환한 후에 출력하는 프로그램을 작성합니다. 입력, 교환, 출력 작업은
다음에 제시된 함수 원형을 지켜 작성합니다.

실행결과
정수 입력: 10 20
정수 출력: 20, 10
*/
void input_data(int *pa, int *pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main()
{
    input_data(&a, &b);
    swap_data();
    print_data(a, b);

    return 0;
}

void input_data(int *pa, int *pb)
{
    printf("두 정수 입력: ");
    scanf("%d%d", &a, &b);  // 전역 변수 a, b의 주소를 가져와 해당 주소에 정수 값 입력
}

void swap_data(void)
{
    int c = 0;  // 교환을 위한 임시 지역 변수 선언
    c = b;  // 지역 변수 c에 전역 변수 b의 값 대입
    b = a;  // b에 a값을 대입하여 교환
    a = c;  // a에 c값(=b값)을 대입하여 교환
}

void print_data(int a, int b)
{
    printf("두 정수 출력: %d, %d", a, b);
}