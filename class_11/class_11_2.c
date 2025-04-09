#include <stdio.h>

/*
getchar, putchar 함수는 문자 전용 입출력 함수로, 키보드로 입력한 문자의 아스키 코드 값을 반환하는 특징으로
int 변수를 받는 것이 특징입니다. 또한 scanf 함수와 마찬가지로 공백, 탭, 개행 문자도 입력받지만 제외하는 옵션이 없습니다. 
*/
int main()
{
    int ch;

    ch = getchar(); // 매개변수가 없으므로 괄호만 사용해 호출
    printf("입력한 문자: ");

    putchar(ch);

    return 0;
} 