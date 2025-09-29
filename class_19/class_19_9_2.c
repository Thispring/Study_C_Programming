// 전역 변수에 extern과 static을 사용해 양수 입력을 받고, 입력된 양수의 개수와 합, 평균을 구하는 프로그램
// input_data 함수 정의
// 음수가 입력될 때 까지 양수를 반복 입력하여 그 합을 반환합니다.
#include <stdio.h>

extern int count;   // 전역 변수 count 공유
int total = 0;      // 전역 변수 선언

int input_data(void)
{
    int pos;    // 양수 저장

    while(1)
    {
        printf("양수 입력: ");
        scanf("%d", &pos);  // 양수 입력
        if (pos < 0) break; // 음수면 입력 종료
        count++;            // 개수 증가
        total += pos;       // 입력값을 전역 변수 total에 누적
    }

    return total;           // 전역 변수 total의 값 반환
}