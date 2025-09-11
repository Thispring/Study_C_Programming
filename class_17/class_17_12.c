/*
typedef를 사용한 형 재정의:
구조체, 공용체, 열거형의 이름은 항상 예약어와 함께 써야 하므로 불편합니다.
이때 typedef를 사용하면 자료형 이름에서 struct와 같은 예약어를 생략할 수 있어
자료형을 짧고 쉬운 이름으로 사용할 수 있습니다.
*/
#include <stdio.h>

struct student
{
    int num;
    double grade;
};
typedef struct student Student; // Student형으로 재정의
void print_data(Student *ps);   // 매개변수로 Student형의 포인터 선언

int main(void)
{
    Student s1 = { 315, 4.2 };  // Student형의 변수 선언과 초기화

    print_data(&s1);    // Student형 변수의 주소 전달

    return 0;
}

void print_data(Student *ps)
{
    printf("학번: %d\n", ps -> num);    // Student 포인터로 멤버 접근
    printf("학점: %.1f\n", ps -> grade);
}
