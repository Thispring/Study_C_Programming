/*
도전1:
소수(prime number) 출력 프로그램
2 이상의 정수를 입력하여 2부터 입력한 수까지의 모든 소수를 출력합니다. 단, 한줄에 5개씩
5칸 간격으로 출력합니다. 하나의 정수가 소수인지를 판단해서 출력하는 과정은 다음과 같습니다.

1. 일단 소수라고 가정한다.
2. 2부터 그 정수보다 하나 작은 수까지 하나라도 나누어 떨어지면 가정을 취소한다.
3. 1의 가정이 2에서 바뀌지 않았으면 그 정수를 출력한다.

위의 1~3까지의 과정은 하나의 정수에 대해서 소수를 판별하는 과정이고 어떤 수까지의
모든 수를 판별하기 위해서는 1~3까지의 과정을 다시 반복합니다.
*/
#include <stdio.h>

int main(void)
{
    int inputNum;
    int sum = 0;
    int primeNum;
    // 출력 조건문으로 0은 false 1을 true로 설정
    int check = 1;
    int count = 0;

    do
    {
        while (inputNum < 2)
        {
            printf("정수입력:\n");
            scanf("%d", &inputNum);
        }
        sum = inputNum;

        // 소수 판별 반복문
        for (int i = 0; 2 <= sum; i++)
        {
            for (int j = 2; j < sum; j++)
            {
                // 0으로 나누어 떨어지면 소수 X
                if (sum % j == 0)
                {
                    check = 0;
                    break;
                }
                else
                {
                    check = 1;
                }
            }

            // 판별된 소수 출력
            if (check == 1)
            {
                primeNum = sum;
                printf("%5d", primeNum);
                count++;
            }
            // 2 ~ sum 범위의 소수 판별을 위해 -1 연산
            sum--;

            // 과정이 5번 반복되면 줄 바꿈
            if (count >= 5)
            {
                printf("\n");
                count = 0;
            }

        }

        sum = 0; // for문이 완료되면 0으로 초기화하여, while문 종료
    } while (sum != 0);

    return 0;
}
