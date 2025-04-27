#include <stdio.h>

// 직접 구현해보는 gets 함수
int main()
{
    int i = 0;
    char str[20];
    char ch;

    ch = getchar(); // getchar를 통해 ch에 문자를 버퍼에 입력받기

    while (ch != '\n')  // 개행문자가 아닐 때 까지 반복
    {
        str[i] = ch;    // char형 배열에 입력받은 문자를 순서대로 집어넣기 
        i++;
        ch = getchar(); // 다음 문자를 읽기 위해 두 번째 getchar를 호출하여, 버퍼에 남아있는 문자 읽기
    }

    str[i] = '\0';  // 마지막에 널 문자 추가

    printf("%s", str);
    return 0;
}