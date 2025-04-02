#include <stdio.h>

/*
주어진 문자열을 "알파벳+연속된 횟수"의 구성으로 재구성하세요.
만약 "aaabbbccc"가 주어진 문자열이라면, "aaabbbccc"는 "a3b3c3"으로 재구성됩니다.
*/
int main()
{
    char sentence[10]; // 문자열 배열
    // char *ps = &sentence;    // 문자열 포인터

    printf("문자열 입력:");
    scanf("%s", sentence);

    printf("%s", sentence);
    printf("\n");

    char *ps = sentence;
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            //printf("%d", sentence[i]);
            if ((int)sentence[i] == (65 + i))
            {
                printf("같은 문자 찾음2\n");
                if ((65 + i) == *(ps + j) || (97 + i) == *(ps + j))
                {
                    printf("같은 문자 찾음\n");
                }
            }
        }
    }

    return 0;
}