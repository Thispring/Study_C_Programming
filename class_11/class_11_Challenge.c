#include <stdio.h>

/*
11강 도전 실전 예제:
길이가 가장 긴 단어 찾기

키보드로 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력하세요.
한 줄에 하나의 단어만 입력하며 Ctrl + Z를 누를 때까지 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력합니다.
배열은 사용하지 않고 작성하세요.
*/
int main()
{
    // 배열사용 금지이므로, 버퍼를 활용
    char ch1, ch2;
    int res1, res2;
    int count1, count2 = 0;
    while (1)
    {
        printf("단어 입력:  ");
        scanf("%s", &ch1);

        for (int i = 0; i < sizeof(ch1); i++)
        {
            count1 += 1;
        }
        printf("count1 : %d\n", count1);

        printf("단어 입력:  ");
        scanf("%s", &ch2);

        for (int i = 0; i < sizeof(ch2); i++)
        {
            count2 += 1;
        }
        printf("count2 : %d\n", count2);
        
        if (count1 > count2)    // count 끼리 비교해서 작은 count를 0으로 초기화
        {
            count2 = 0;
        }
        else
        {
            count1 = 0;
        }

        if (res1 == -1) // Ctrl + Z까지 반복
            break;
    }

    return 0;
}