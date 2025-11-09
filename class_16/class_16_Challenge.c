#include <stdio.h>
#include <stdlib.h>

/*
도전1:
소수(prime number) 계산 프로그램
키보드로 양수를 입력한 후에 입력한 수까지의 모든 소수를 출력합니다.
2부터 한 줄에 5개씩 출력하며 소수가 아닌 수는 X를 출력합니다.
입력한 수에 따라 적절한 크기의 배열을 동적 할당하여 사용합니다.
*/
void print_prime(int *pn); // 소수 출력 함수
int check_prime(int num);  // 소수 판별 함수

int main(void)
{
    int inputNum = 0;
    int *inp = &inputNum; // inputNum을 가리키는 포인터

    // while 문으로, 숫자 입력
    // 양수가 아니면 다시 입력받기
    while (1)
    {
        printf("Input Number: \n");
        scanf("%d", &inputNum);

        if (inputNum >= 1)
            break;
        else
            continue;
    }
    printf("\n");
    print_prime(inp);

    return 0;
}

void print_prime(int *pn)
{
    // 지역변수 index에 역참조 값을 저장
    int index = *pn;
    int *pi;
    // pn의 역참조 값 * char size만큼 동적 공간 생성
    // 할당 공간에 소수라면 해당 숫자를 리턴하고, 소수가 아니면 'X'문자를 출력하도록 0을 리턴
    pi = (int *)malloc(*pn * sizeof(int));

    // 1부터 시작해야 하므로, pn + 1의 크기만큼 반복
    for (int i = 1; i < *pn + 1; i++)
    {
        pi[index] = check_prime(index);
        index--;
    }

    for (int i = 1; i < *pn + 1; i++)
    {
        if (pi[i] != 0)
            printf("%d ", pi[i]);
        else
            printf("X ");

        if ((i + 1) % 5 == 0)
            printf("\n");
    }
}

int check_prime(int index)
{
    // 판별 숫자를 복사하여, 복사된 숫자가 1이 될때 까지 반복
    // 이때 나눗셈 결과가 1일때 마다 카운트
    // 만약 카운트가 3이상이라면 'X'를 출력하도록 0을 반환
    int divNum = index;
    int primeCount = 0;

    while (divNum >= 1)
    {        
        // 나머지가 0일때 나누어 떨어지는 것이므로
        // 자기자신과 1외에 count가 증가했다는 것은 소수가 아니라는 뜻
        if (index % divNum == 0)
            primeCount++;

        if (primeCount >= 3)
        {
            return 0;
        }

        divNum--;
    }

    return index;
}
