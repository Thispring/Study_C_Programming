/*
바이트 얼라인먼트(byte alignment):
시스템은 데이터를 빠르게 읽고 쓰기 위해 일정한 크기 단위로 메모리에 접근합니다.
따라서 구조체 멤버의 크기가 다른 경우, 멤버 사이에 패딩 바이트(padding byte)를 넣어 멤버들을 정렬합니다.
이를 바이트 얼라인먼트라 하며, 멤버의 크기와 순서에 따라 구조체의 크기가 달라질 수 있습니다.

바이트 얼라인먼트 방식은 시스템마다 다를 수 있습니다. (*책에선 크기가 가장 큰 멤버가 메모리를 할당하는 기준이 됨) 

가독성을 포기하고 메모리를 아껴야 하는 경우, 순서 정렬을 통해 패딩 바이트가 가장 작도록 선언할 수 있습니다.
또는 다음과 같이 컴파일러에 패딩 바이트를 넣지 않도록 지시할 수 있습니다.
#pragma pack(1);    // 바이트 얼라인먼트를 1로 설정하면 패딩 바이트가 필요 없음
*/
#include <stdio.h>

struct student
{
    char ch1;
    short num;
    char ch2;
    int score;
    double grade;
    char ch3;
};

struct student2
{
    char ch1;
    char ch2;   
    short num;  
    int score;
    double grade;
    char ch3;
};  // double 8바이트를 기준으로, char ch2와 short num의 위치를 변경

int main(void)
{
    struct student s1;
    struct student2 s2;

    printf("s1 size is: %lu\n", sizeof(s1));
    printf("s2 size is: %lu\n", sizeof(s2));
    return 0;
}