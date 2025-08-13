/*
구조체 변수도 일반 변수와 같이 선언과 동시에 초기화가 가능합니다.
단, 여러 개의 멤버를 초기화 하므로 배열 초기화와 비슷한 방법을 사용합니다.
초깃값을 중괄호로 묶고 각 멤버의 형태에 맞는 값으로 초기화 할 수 있습니다.
*/
#include <stdio.h>

struct student
{
    int id;
    char name[20];
    double grade;
};  // s1 = { 315, "홍길동", 2.4 };     // 선언과 동시에 초기화

int main(void)
{
    // 형태와 순서에 맞게 int, char, double 순으로 변수 초기화
    struct student s1 = { 315, "홍길동", 2.4 },     // 구조체 변수 선언과 초기화
                   s2 = { 316, "이순신", 3.7 },
                   s3 = { 317, "세종대왕", 4.4 };
    
    struct student max;     // 최고 학점을 저장할 구조체 변수

    // 대입 연산으로 student 멤버 요소를 복사
    max = s1;                               // s1을 최고 학점으로 가정
    if (s2.grade > max.grade) max = s2;     // s2가 더 높으면 max에 대입
    if (s3.grade > max.grade) max = s3;     // s3가 더 높으면 max에 대입

    printf("학번: %d\n", max.id);
    printf("이름: %s\n", max.name);
    printf("학점: %.1lf\n", max.grade);

    return 0;
}
