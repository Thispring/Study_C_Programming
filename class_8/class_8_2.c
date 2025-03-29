#include <stdio.h>

// sizeof 연사를 활용한 배열 처리
// sizeof를 통해 배열 요소의 개수를 직접 계산이 가능
int main(void)
{
    // 점수의 평균을 구하는 코드
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;  // 배열 요소의 개수를 저장할 변수

    count = sizeof(score) / sizeof(score[0]);   // 배열 요쇼의 개수 계산
    // sizeof(score)는 전체 바이트 크기는 4바이트 배열이 5개 이므로, 20바이트
    // sizeof(score[0])는 배열의 1요소 이므로, 4바이트
    // 배열 요소 개수 = 전체 배열 크기 / 배열 요소 하나의 크기

    for (i = 0; i < count; i++)
    {
        scanf("%d", &score[i]);
    } 

    for (i = 0; i < count; i++)
    {
        total += score[i];
    }
    avg = total / (double)count;    // 총합을 count로 나누어 평균 계산, (double)사용해 실수 연산으로 변경
    
    for (i = 0; i < count; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");
    
    printf("평균: %.1f\n", avg);

    return 0;
}