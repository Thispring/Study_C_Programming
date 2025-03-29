#include <stdio.h>
// 함수 정의(함수의 기능을 구현한 코드)가 있지만, 앞에 함수 선언을 해야하는 이유 
// 이유1: 함수 선언에서 반환값의 형태를 확인
// 이유2: 함수의 호출 형식에 문제가 없는지 검사
// 함수 선언 없이 함수 정의만 가지고 실행이 가능하나, 함수 호출 이전에 없는 경우 오류 발생

double res(double a, double b)
{
    double res;
    res = a + b;

    return res;
}

int main(void)
{
    double result;
    result = res(4.5, 1.5);

    printf("%0.1lf\n", result);
    return 0;
}
