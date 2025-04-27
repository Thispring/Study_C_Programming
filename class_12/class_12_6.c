#include <stdio.h>
#include <strings.h>

/*
fgets 함수는 배열의 크기를 확인하여, 최대 배열의 크기까지만 문자열을 입력받게 설계되어있습니다.
*/
int main()
{
    char str[80];

    printf("공백이 포함된 문자열 입력: ");
    fgets(str, sizeof(str), stdin); // fgets(배열명, 배열의 크기 확인, 표준 입력)
    /*
    fgets 함수는 버퍼에 있는 개행 문자도 배열에 저장하고 널 문자를 붙여 문자열을 완성합니다.
    따라서 널 문자 이전까지의 문자 수 (=strlen(배열명))에 -1을 한 위치에 개행문자를 널 문자로 바꾸어, 배열에 있는 개행문자를 제거할 수 있습니다.
    */
    str[strlen(str) - 1] = '\0';

    printf("입력된 문자열은 %s입니다.\n", str);

    return 0;
}