#include <stdio.h>
//break와 continue

int main()
{
    int i;
    int sum = 0;

    for (i = 0; i < 10; i++)
    {
        sum += i;
        if (sum > 30)break; // if 조건이 참이면 반복문 종료
    }
    printf("누적 값1: %d\n", sum);
    printf("최종 값1: %d\n", i);
    /*
    break는 반복을 즉시 끝내고 싶을 때 사용합니다.
    break는 자신을 포함하는 반복문 하나만 벗어납니다.
    */
    int j = 1;
    int sum2 = 0;

    while(j < 40)
    {
        sum2 += j;
        if (sum2 > 30)
        {
            break;  // if는 선택문이어서 while 반복문 전체를 벗어남
        }
    }
    // switch~case의 경우 break는 반복문 블록을 벗어나지 않음
    printf("최종 값2: %d\n", sum2);

    int count = 0;
    while(1)
    {
        printf("hello\n");
        count++;
        if(count == 5)break;
    }
    /*
    break는 무한 반복문 while(1), for(;;)
    을 빠져나오기 위해 사용 할 수 있습니다.
    */

    int a;
    int sum3 = 0;
    for (i = a; a < 100; a++)
    {
        if ((a % 3)==0) // 3의 배수를 제외하고 1부터 100까지의 합
        {
            continue;  
        }
        /*
        continue는 반복문의 일부를 건너뛰어, 다음 실행 위치가 반복문 블록 끝이 됩니다.
        반복문을 탈출하는게 아니라, 조건에 따라 반복문의 일부를 제외하고 반복할 수 있습니다.
        */
        sum3 += a;
    }
    printf("3의 배수를 제외하고 1부터 100까지의 합: %d\n", sum3);
    /*
    i = 1;
    while(i<=100)
    {
        if((i%3) == 0)
        {
            continue;
        }
        sum += i;
        i++;
    } 의 경우 증감식을 뛰어넘고 다시 if문으로 가기때문에 무한반복
    */

    return 0;
}