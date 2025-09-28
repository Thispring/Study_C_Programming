/*
이미 정의된 매크로:
매크로 중 이미 그 정의가 약속되어 사용자가 취소하거나 바꿀 수 없는 매크로명이 있습니다.

디버깅에 유용한 매크로:
__FILE__ -> 전체 디렉터리 경로를 포함한 파일명
__FUNCTION__ -> 매크로명이 사용된 함수 이름
__LINE__ -> 매크로명이 사용된 행 번호
__DATE__ -> 컴파일을 시작한 날짜
__TIME__ -> 컴파일을 시작한 시간
*/
#include <stdio.h>

void func(void);

int main(void)
{
    printf("컴파일 날짜와 시간: %s, %s\n\n", __DATE__, __TIME__);
    printf("파일명: %s\n", __FILE__);
    printf("함수명: %s\n", __FUNCTION__);
    printf("행번호: %d\n", __LINE__);

// #line 지시자로 __LINE__ 행 번호를 설정하거나, __FILE__ 의 이름을 설정할 수 있습니다.
// #line은 행 번호만 바꾸고 싶으면 파일명은 생략할 수 있으나 파일명만 사용하는 것은 불가능합니다.
// ex) #line "macro.c" (X)
#line 100 "macro.c" // 행 번호를 100부터 시작, 파일명은 macro.c로 표시
    func();         // 여기부터 행 번호는 100으로 시작

    return 0;
}

void func(void)
{
    printf("\n");
    printf("파일명: %s\n", __FILE__);
    printf("함수명: %s\n", __FUNCTION__);
    printf("행번호: %d\n", __LINE__);
}
