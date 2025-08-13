/*
다른 구조체를 멤버로 갖는 구조체를 선언할 수 있습니다.
대신 갖으려는 구조체는 먼저 선언되어 있어야 합니다.
*/
#include <stdio.h>

struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;  // profile 구조체를 멤버로 사용
    int id;
    double grade;
};

int main(void)
{
    struct student yuni;    // student 구조체 변수 선언

    yuni.pf.age = 17;   // pf 멤버의 age 멤버에 나이 저장
    yuni.pf.height = 164.5; // pf멤버의 height 멤버에 키 저장
    yuni.id = 315;
    yuni.grade = 4.3;

    printf("나이: %d\n", yuni.pf.age);
    printf("키: %.1f\n", yuni.pf.height);
    printf("학번: %d\n", yuni.id);
    printf("학점: %.1f\n", yuni.grade);

    return 0;
}
