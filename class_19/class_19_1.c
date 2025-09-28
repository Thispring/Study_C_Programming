#include <stdio.h>

int main(void)
{
    #include "myhdr.c"
    return 0;
}
/*
#include는 텍스트 파일의 내용을 복사하여 붙여넣는 기능을 합니다.
위와 같이 소스 파일을 따로 떼어 헤더 파일로 만든 후에 인클루드 하는 것이 가능합니다.

*특별한 이유 없이 이런 식의 코딩은 하지 말아야 합니다.
*/