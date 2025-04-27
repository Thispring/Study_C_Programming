#include <stdio.h>

/*
문자열은 컴파일 과정에서 첫 번째 문자의 주소로 취급되며, 배열을 출력하는 것과 같은 과정을 거칩니다.
ex)"apple"이라는 문자열은 문자열이 저장된 시작 위치 값인 a의 주소 값을 가지고 있으며, 이를 이용해 
다른 주소에 있는 값을 알 수 있다.
*/
// 문자열 상수가 주소란 증거
int main()
{
    printf("apple이 저장된 시작 주소 값: %p\n", "apple");
    printf("두 번째 문자의 주소 값: %p\n", "apple" + 1);
    printf("첫 번째 문자: %c\n", *"apple");
    printf("두 번째 문자: %c\n", *("apple" + 1));
    printf("배열로 표현한 세 번째 문자: %c\n", "apple"[2]);

    return 0;
}