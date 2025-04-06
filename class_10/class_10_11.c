#include <stdio.h>

// 배열에 값을 입력하는 함수는 데이터를 저장할 배열의 위치가 필요하므로 함수 안에서 포인터를 직접 사용
// 배열에 값을 입력하는 함수

void input_ary(double *p, int size);
double find_max(double *p, int size);

int main()
{
    double ary[5];
    double max; // 최댓값을 저장할 변수
    int size = sizeof(ary) / sizeof(ary[0]);    // 배열의 크기
    input_ary(ary, size);
    max = find_max(ary, size);
    printf("배열의 최댓값: %.1lf\n", max);

    return 0;
}

void input_ary(double *p, int size)
{
    printf("%d개의 실수값 입력: \n", size);
    for (int i = 0; i < size; i ++)
    {
        scanf("%lf", &p[i]);    // &연산자를 통해 입력할 배열 요소의 주소 전달, (p + i) 로도 사용가능
    }
}

double find_max(double *p, int size)
{   
    double max; // main 함수의 max와는 다른 변수
    
    max = p[0]; // 첫 번째 배열 요소의 값을 최댓값으로 설정
    for (int i = 1; i < size; i++)  // 두 번째 배열요소 (p[1])부터 max와의 비교
    {
        if (p[i] > max) // p[i]값이 max(p[0])보다 크다면
            max = p[i]; // max에 해당 값을 대입
    }

    return max; // 최댓값 반환
}