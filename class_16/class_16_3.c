#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
동적 할당을 사용한 문자열 처리:
문자열의 길이를 알 수 없는 경우 무조건 큰 배열을 선언하는 것은 저장 공간의
낭비를 초래할 수 있습니다. 동적 할당을 사용하면 입력되는 문자열의 길이에 맞게
저장 공간을 사용할 수 있습니다.
*/
int main(void)
{
    char temp[80];  // char 배열
    char *str[3];   // 동적 할당 영역을 연결할 포인터 배열
    int i;          // 반복 제어 변수

    for (i = 0; i < 3; i++)
    {
        printf("문자열을 입력하세요: ");
        fgets(temp, sizeof(temp), stdin);
        //gets(temp);     // 문자열 입력
        if (str[i] == NULL) // 동적 할당 실패 예외 처리
        {
            printf("실패");
            exit(1);
        }
        str[i] = (char *)malloc(strlen(temp) + 1);  // 문자열 저장 공간 할당
        // char 포인터 str[i]에, temp에 입력한 길이 + 1(널문자)만큼 동적 할당
        strcpy(str[i], temp);   // strcpy함수를 통한 동적 할당 영역에 문자열 복사
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);     // 입력된 문자열 출력
    }

    for (i = 0; i < 3; i++)
    {
        free(str[i]);   // 동적 할당 영역 반환
    }

    return 0;
}