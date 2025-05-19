#include <stdio.h>

/*
2차원 char 배열:
문자형 배열도 정수형 배열처럼 2차원 배열을 선언하고 초기화 할 수 있습니다.
*/
int main()
{
    char animal[5][20];
    int count;

    count = sizeof(animal) / sizeof(animal[0]);  // 행의 수 계산
    
    for (int i = 0; i < count; i++) // 행의 수를 계산하여 행의 수 만큼 반복
    {
        scanf("%s", animal[i]); // 문자열 입력
    }

    for (int i = 0; i < count; i++)
    {
        printf("%s", animal[i]);    // 문자열 출력
        printf("\n");
    }

    printf("%c\n", animal[0][2]);   // %c로 특정 위치의 문자 출력
    printf("%s", animal[1]);    // animal[1]에 저장된 값 출력
    /*
    각 행은 하나의 1차원 char배열로 부분배열명이 각 행의 배열의 기능을 합니다.
    부분배열명을 사용하여 각 행에 하나의 문자열을 입력 or 출력을 할 수 있습니다.

    배열명[0]은 부분배열의 시작 위치 값으로 사용됩니다.
    */
    return 0;
}