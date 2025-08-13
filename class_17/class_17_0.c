/*
구조체는 다른 형태의 데이터들을 하나로 묶어, 효율적인 데이터 처리가 가능한 자료형입니다.
구조체 선언을 통해 컴파일러에 미리 형태를 알려야 합니다.
*/
#include <stdio.h>

struct student  // 구조체 선언
{
    int num;
    double grade;
};  // 세미콜론으로 끝맺음
// main 함수 앞에 선언하면 전역으로 사용가능하며, 함수 안에 선언하면 그 함수 안에서만 사용 가능

int main(void)
{
    // 구조체 변수 크기는 모든 멤버의 크기를 더한 값으로 설정
    // int형 변수 1개와 double형 변수 1개로 총 12byte 크기를 가짐
    struct student s1;  // struct student형의 변수 선언

    // 맴버 접근 연산자 . 을 사용하여, 해당 멤버 변수를 사용할 수 있음
    s1.num = 2;
    s1.grade = 2.7;
    printf("학번: %d\n", s1.num);
    printf("학점: %.1lf\n", s1.grade);

    return 0;
}