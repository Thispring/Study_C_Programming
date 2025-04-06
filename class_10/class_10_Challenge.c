/*
10강 도전 실전 예제:
로또 번호 생성 프로그램

1~45 중에 6개의 서로 다른 수를 배열에 입력하고 출력합니다. 입력한 수가 이미 저장된 수와 같으면
에러 메시지를 출력하고 다시 입력합니다. 다음 함수의 선언과 정의를 참고하고 빈 부분을 채워 완성합니다.
*/
#include <stdio.h>

void input_nums(int *lotto_nums); // 배열에 로또 번호를 입력하는 함수
void print_nums(int *lotto_nums); // 배열에 저장된 값을 출력하는 함수

int main()
{
    int lotto_nums[6]; // 로또 번호를 저장할 배열

    input_nums(lotto_nums); // 입력 함수 호출, lotto_nums 배열을 매개변수로
    print_nums(lotto_nums); // 출력 함수 호출, lotto_nums 배열을 매개변수로
    return 0;
}

void input_nums(int *lotto_nums) // 포인터 변수 lotto_nums
{
    printf("로또 번호 입력: \n");
    int count = -1;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &lotto_nums[i]); // 배열에 숫자 입력

        for (int j = 0; j < count; j++)
        {
            if (lotto_nums[i] == lotto_nums[j])
            {
                printf("같은 번호가 있습니다!");
                break;
            }
            else
            {
                printf("검사완료\n");
            }
        }
        count++;
    }
}

void print_nums(int *lotto_nums)
{
    printf("로또 번호 출력: \n");

    for (int i = 0; i < 6; i++)
    {
        printf("%5d", lotto_nums[i]);
    }
}