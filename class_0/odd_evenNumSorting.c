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
    // 자연수만 받으므로 공백에는 0추가
    int oddNum[10] = {0, }; // 홀수 배열
    int evenNum[10]= {0, }; // 짝수 배열
    int count = 0;

    printf("숫자 입력:");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", num+i); // num의 크기까지 숫자 입력
    }
    
    for(int i = 0; i < 10; i++)
    {
        if((num[i])%2 == 0)  // 홀짝 구별, 2의 몫이 0이면 짝수, 아니면 홀수
        {
            evenNum[i] = num[i];
        }
        else
        {
            oddNum[i] = num[i];
        }
    }

    for(int i = 0; i < 10; i++)
    {
        if (oddNum[i] != 0)
        {
            printf("%d ", oddNum[i]);
            count++;
        }
    }

    if (count != 0) // 만약 첫 번째줄(홀수)이 출력되면 개행문자 출력 
        printf("\n");

    for(int i = 0; i < 10; i++)
    {
        if (evenNum[i] != 0)
        {
            printf("%d ", evenNum[i]);
        }
    }

    return 0;
}