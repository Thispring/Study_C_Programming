#include <stdio.h>
#include <string.h>

/*
키보드로 입력한 단어의 길이가 5자를 넘는 경우 6자부터 별(*)을 출력하는 프로그램을 작성합니다.
단어의 최대 길이는 15자로 제한합니다.
*/
int main()
{
    char str[15];
    int count = 0;  // 5개 초과 시 카운트 변수
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    for (int i = 0; i < strlen(str); i++)
    {
        count++;    // str길이만큼 카운트
    }

    if (count >= 6) // 입력단어가 6자부터 *을 대신 출력하므로 count >= 6
    {
        while(count >= 6)
        {
            str[count-1] = '*';   // 널 문자 이전 배열의 값을 *로 바꿔야 하기 때문에, count-1 부터 시작
            count--;
        }

        printf("%s\n", str);
    }
    else
    {
        printf("%s\n", str);
    }

    return 0;
}