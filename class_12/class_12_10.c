#include <stdio.h>
#include <string.h>

/*
strncpy 함수는 문자열을 복사할 때 문자의 수를 지정할 수 있습니다.
strncpy(복사받을 주소, "복사할 문자열", 복사할 문자 수);
*/
int main()
{
    char str[20] = "mango tree";

    strncpy(str, "apple-pie", 5);   // "apple-pie"에서 5문자인 apple만 복사

    printf("%s\n", str);

    // strncpy는 지정한 개수 만큼 문자를 복사하고, 마지막에 널 문자를 저장하지 않습니다.
    return 0;
}