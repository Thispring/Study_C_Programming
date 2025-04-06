#include <stdio.h>
#include <string.h>

/*
주어진 문자열을 "알파벳+연속된 횟수"의 구성으로 재구성하세요.
만약 "aaabbbccc"가 주어진 문자열이라면, "aaabbbccc"는 "a3b3c3"으로 재구성됩니다.
*/
int main()
{
    char sentence[100]; // 문자열 배열
    int count = 1;

    printf("문자열 입력:");
    scanf("%s", sentence);

    char current = sentence[0];
    for (int i = 1; i < strlen(sentence); i++)  // strlen, 문자열의 길이를 널 문자전까지 계산
    {
        if (current != sentence[i])
        {
            printf("%c%d", current, count);
            count = 1;    // 다른 값이 있으면 카운트를 초기화
            current = sentence[i];  // current 변수에 다른 문자열 전달
        }
        else
        {
            count++;    // 다른 배열(주소)에 같은 값이 있으면 카운트 업
        }
    }
    printf("%c%d", current,count);
    printf("\n");

    return 0;
}