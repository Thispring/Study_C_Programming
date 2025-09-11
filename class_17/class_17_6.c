/*
구조체 포인터와 -> 연산자:
구조체 변수에 주소 연산자를 사용하면 특정 멤버의 주소가 아니라
구조체 변수 전체의 주소가 구해집니다. 또한 그 값을 저장할 때는 구조체 포인터를 사용합니다.
*/

#include <stdio.h>

struct score    // 구조체 선언
{
    int kor;
    int eng;
    int math;
};

int main(void)
{
    struct score yuni = { 90, 80, 70 }; // 구조체 변수 선언과 초기화
    struct score *ps = &yuni;           // 구조체 포인터에 주소 저장
    
    printf("국어: %d\n", (*ps).kor);    // 구조체 포인터로 멤버 접근
    printf("영어: %d\n", ps -> eng);    // -> 연산자 사용
    printf("수학: %d\n", ps -> math);

    return 0;
}