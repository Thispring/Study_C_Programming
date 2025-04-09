#include <stdio.h>

/*
scanf 함수 사용 시 변환 문자 %c를 사용합니다. 
%c는 공백, 탭문자, 개행 문자도 정해진 아스키 코드 값으로 받는 특징이 있습니다.
*/ 
int main()
{
    char ch1, ch2;

    scanf("\n%c %c", &ch1, &ch2);   // %c 앞에 공백, \t(탭문자), \n(개행문자)를 붙여서 사용하면 해당 문자를 제외하고 값을 입력

    printf("%c%c", ch1, ch2);

    return 0;
}