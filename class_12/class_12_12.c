#include <stdio.h>
#include <string.h>

/*
strcat, strncat 함수는 배열에 있는 문자열 뒤에 새로운 문자열을 붙일 수 있는 함수입니다.

strcat 함수 주의 사항
1: strcat 함수는 메모리를 침범할 수 있습니다.
-> 추가할 문자열이 기존 배열의 크기를 넘어설 경우 메모리 영역을 침범하게 됩니다.
2: strcat 함수를 사용할 때는 배열을 초기화해야 합니다.
-> 초기화하지 않으면 쓰레기 값의 중간부터 붙여넣을 가능성이 큽니다.
*/
int main()
{
    char str[80] = "straw";

    strcat(str, "berry");   // str 배열 뒤에 "berry" 붙이기
    printf("%s\n", str);
    strncat(str, "piece", 3);   // str 배열 뒤에 "piece"의 3개까지 붙이기
    printf("%s\n", str);

    return 0;
}