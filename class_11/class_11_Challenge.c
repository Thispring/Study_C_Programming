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
    int res1, res2;
    int count1, count2 = 0;
    char ch1, ch2;
    while (1)
    {
        // printf("단어 입력:  ");
        res1 = scanf("%c", &ch1);
        for (int i = 0; i < sizeof(ch1); i++) // sizeof를 통해 문자길이만큼 반복
        {
            count1++; // 문자길이 만큼 연산하여, 길이의 크기 저장
            printf("해당 단어의길이는: %d\n", count1);
        }

        res2 = scanf("%c", &ch2);
        for (int i = 0; i < sizeof(ch2); i++)
        {
            count2++;
            printf("해당 단어의길이는: %d\n", count2);
        }

        if (res1 == -1) // Ctrl + Z까지 반복
            break;
    }

    if (count1 > count2)
    {
        printf("count1이 더 큽니다.\n");
    }
    else
    {
        printf("count2이 더 큽니다.\n");
    }

    return 0;
}