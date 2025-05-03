#include <stdio.h>
#include <string.h>

/*
strlen 함수는 배열에 저장된 문자열에서 널 문자가 나올 때 까지 문자 수를 세어 반환합니다.
*/
int main()
{
    char str1[80], str2[80];
    char *resp; // 문자열이 긴 배열을 선택할 포인터

    printf("2개의 과일 이름 입력: ");
    scanf("%s%s", str1, str2);
    // 문자열의 길이를 반환하므로, 반환값을 비교하거나 수식의 일부로 사용할 수 있습니다.
    if (strlen(str1) > strlen(str2))
    {
        resp = str1;
    }
    else
    {
        resp = str2;
    }

    printf("이름이 긴 과일은: %s\n", resp);

    return 0;
}