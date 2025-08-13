/*
배열, 포인터, 이미 선언된 다른 구조체도 멤버로 사용할 수 있으나, 사용방법에 유의해야 합니다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
    char name[20];  // 이름을 저장할 배열
    int age;
    double height;
    char *intro;    // 자기소개를 위한 포인터
};

int main(void)
{
    struct profile yuni;    // profile 구조체 변수 선언

    // 구조체 멤버 배열 이름은 상수이기 때문에, 대입연산 불가
    strcpy(yuni.name, "서하윤");    // name 배열 멤버에 이름 복사
    yuni.age = 17;
    yuni.height = 164.5;

    // 포인터 변수는 문자열 자체를 저장할 공간이 없기에, 동적 할당을 통해 공간을 확보해야 입력을 받을 수 있음
    yuni.intro = (char *)malloc(80);    // 자기소개를 저장할 공간 동적 할당
    printf("자기소개: ");
    gets(yuni.intro);   // 할당한 공간에 자기소개 입력

    // 각 멤버의 데이터 출력
    printf("이름: %s\n", yuni.name);
    printf("나이: %d\n", yuni.age);
    printf("키: %.lf\n", yuni.height);
    printf("자기소개: %s\n", yuni.intro);
    free(yuni.intro);   // 동적 할당 영역 반환

    return 0;
}