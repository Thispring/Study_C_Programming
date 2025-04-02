#include <stdio.h>

/*
주어진 숫자가 홀수인지 짝수인지 판별해 홀수는 홀수끼리, 짝수는 짝수끼리 출력하는 프로그램을 작성하세요.

숫자는 총 10개가 주어지며, 모두 자연수로 구성됩니다.

주어진 숫자들의 홀, 짝 여부에 따라 분류한 뒤, 홀수들과 짝수들을 각각 출력하세요. 출력은 첫 번째 줄에 홀수 숫자들을 공백으로
구분하여 출력하고 두 번째 줄에 짝수 숫자들을 공백으로 구분하여 출력합니다.

홀수와 짝수의 출력 순서 모두 입력 순서와 같습니다.
*/
int main()
{
    int num[10];  // 숫자를 받는 배열
    int oddNum[20]; // 홀수 배열
    int evenNum[20];    // 짝수 배열

    printf("숫자 입력:");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", num+i); // num의 크기까지 숫자 입력
    }
    
    for(int i = 0; i < 10; i++)
    {
        if((num[i])%2 == 0)  // 짝수 구별
        {
            evenNum[i] = num[i];
            evenNum[i+1] = 0; // 다음 배열에 공백 추가
        }
        else
        {
            evenNum[i] = 0; // 짝수가 아닌 배열에 0추가
        }

        if((num[i])%2 != 0)    // 홀수 구별
        {
            oddNum[i] = num[i];
            oddNum[i+1] = 0; // 다음 배열에 공백 추가
        }
        else
        {
            oddNum[i] = 0; // 홀수가 아닌 배열에 0추가
        }
    }

    for(int i = 0; i < 10; i++)
    {
        if (oddNum[i] == 0)
        {
            printf(" ");
        }
        else
        {
            printf("%d", oddNum[i]);
        }
    }
    printf("\n");
    for(int i = 0; i < 10; i++)
    {
        if (evenNum[i] == 0)
        {
            printf(" ");
        }
        else
        {
            printf("%d", evenNum[i]);
        }
    }

    return 0;
}