#include <stdio.h>
#include <string.h> // strcpy 함수 사용을 위한 헤더 파일

// 문자열을 대입하는 strcpy 함수

int main(void)
{
    char str1[80] = "cat";
    char str2[80];

    // strcpy(첫 번째 인수, 두 번째 인수) -> 두 번째 인수를 첫 번째 인수에 대입
    // 첫 번째 인수는 두 번째 인수의 문자열 보다 커야함
    // strcpy("lion", "tiger"); <- 첫 번째 인수에 문자열을 넣어서 사용 X
    strcpy(str1, "tiger");  // 두 번째 인수에 문자열
    strcpy(str2, str1); // 두 번째 인수에 char 배열
    printf("%s, %s\n", str1, str2);

    return 0;
}