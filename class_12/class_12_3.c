#include <stdio.h>

// 상수인 문자열을 바꾸기를 원한다면 char형 배열을 사용해 문자열을 입력받아야 합니다.
// scanf 함수를 사용한 문자열 입력
int main()
{
    char str[80];

    printf("문자열 입력: ");
    scanf("%s", str);
    printf("첫 번째 단어: %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남아 있는 두 번째 단어: %s\n", str);

    return 0;
    // 버퍼를 사용하는 scanf는 문자열을 저장 할 때, 중간에 공백, 탭, 개행 문자가 있으면 그 이전 까지 저장합니다.
}