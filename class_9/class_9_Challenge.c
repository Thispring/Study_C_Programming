/*
도전1:
미니 정렬 프로그램
키보드로 실수 3개를 입력한 다음 큰 숫자부터 작은 숫자로 정렬한 뒤 출력하는 프로그램을 작성합니다.
다음 코드와 출력 결과를 참고하여 line_up 함수를 작성하세요. line_up 함수에는 이미 정의된 swap 함수를 호출하여 구현하세요.
*/
#include <stdio.h>

void swap(double *pa, double *pb);  // 두 실수를 바꾸는 함수
void line_up(double *maxp, double *midp, double *minp); // 함수 선언

int main(void)
{
    double max, mid, min;

    printf("실수값 3개 입력: ");
    scanf("%lf%lf%lf", &max, &mid, &min);
    line_up(&max, &mid, &min);
    printf("정렬된 값 출력: %.1lf, %.1lf, %.1lf\n", max, mid, min);

    return 0;
}

void swap(double *pa, double *pb)
{
    double temp;
    
    temp = *pa;
    *pa = *pb;
    *pb = temp;    
}

void line_up(double *maxp, double *midp, double *minp)
{
    // maxp가 가장 큰 경우
    if (*maxp > *midp)
    {
        if (*maxp > *minp)
        {
            if (*minp > *midp)
                swap(minp, midp);
        }
    }
    // midp가 가장 큰 경우
    if (*midp > *maxp)
    {
        if (*midp > *minp)
        {
            swap(midp, maxp);
            if (*minp > *midp)
                swap(minp, midp);
        }
    }
    // minp가 가장 큰 경우
    if (*minp > *maxp)
    {
        if (*minp > *midp)
        {
            swap(minp, maxp);
            if (*minp > *midp)
                swap(minp, midp);
        }
    }
}