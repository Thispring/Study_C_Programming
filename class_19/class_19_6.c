/*
조건부 컴파일 지시자:
조건부 컴파일은 소스 코드를 조건에 따라 선택적으로 컴파일합니다.
#if, #else, #elif, #ifdef, #ifndef, #endif 등의 전처리 지시자를 조합하여 사용합니다.
*/
#include <stdio.h>
#define VER 7           // 치환될 부분이 있는 매크로명 정의
#define BIT16           // 치환될 부분이 없는 매크로명 정의

int main(void)
{
    int max;

// 조건부 컴파일 작성 시 #endif를 마지막에 반드시 사용합니다.
#if VER >= 6                                // 매크로명 VER이 6 이상이면
    printf("버전 %d입니다.\n", VER);         // 치환될 부분이 없는 매크로명 정의
#endif                                      // #if의 끝

#undef BIT16    // BIT16 매크로명의 정의 취소

#ifdef BIT16                                // 매크로명 BIT16이 정의되어 있으면
    max = 32767;                            // 해당 문장 컴파일
#else                                       // 정의되어 있지 않으면
    max = 2147483647;                       // 해당 문장 컴파일
#endif                                      // #ifdef의 끝

    printf("int형 변수의 최댓값: %d\n", max);   // max 출력

// 매크로명이 정의되지 않는 경우를 확일 때는 !defined 연산자나 #ifndef를 사용합니다.
#ifndef BIT16
    printf("ifndef 사용 예\n");
#endif

// #ifdef와 #ifndef는 매크로명의 정의 여부만 확인 할 수 있으므로 다른 연산자와 함께 조건식을
// 만들 때는 defined나 !defined 연산자를 사용합니다.
#if ((defined(BIT16) && VER >= 6))
    printf("defined 사용 예\n");
#endif

// 조건을 만족하지 않는 경우 컴파일 자체를 중단시킬 경우 #error 지시자를 사용합니다.
#if VER >= 6
#else
#error 컴파일러 버전은 6.0 이상이어야 합니다.   // 메시지를 보여주고 컴파일 종료
#endif

    return 0;
}
/*
조건부 컴파일 기능을 사용하여 컴파일할 코드를 구별하면 서로 다른 컴파일러에서 컴파일이
가능한 코드를 만들 수 있어 프로그램의 호환성을 높입니다.
*/