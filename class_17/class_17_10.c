/*
공용체:
공용체는 선언 방식이 구조체와 비슷하지만 공용체는 모든 멤버가
하나의 저장 공간을 같이 사용합니다. 공용체는 다음과 같은 특징을 가지고 있습니다.

1: 공용체 변수의 크기는 멤버 중에서 크기가 가장 큰 멤버로 결정됩니다.
2: 공용체 변수의 초기화는 중괄호를 사용하여 첫 번째 멤버만 초기화합니다.
*/
#include <stdio.h>

union student   // 공용체 선언
{
    int num;
    double grade;
};

int main(void)
{
    union student s1 = { 315 }; // 공용체 변수의 선언과 초기화

    printf("학번: %d\n", s1.num);   // 학번 멤버 출력
    s1.grade = 4.4; // 학점 멤버에 값 대입
    printf("학점: %.1lf\n", s1.grade);
    printf("학번: %d\n", s1.num);   // 학번 다시 출력
    // 8byte student 공간에 double 데이터를 집어넣기 위해
    // 기존 int 데이터 315 데이터를 삭제하기에 num의 초깃값이 변경

    return 0;
}