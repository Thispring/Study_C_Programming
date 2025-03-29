#include <stdio.h>
// 반환값이 없는 함수
// 데이터를 받아서 화면에 출력하는 기능만 있는 함수일 때 활용

void print_char(char ch, int count);   // 함수 선언, 정의 시 반환 값 자리(맨 앞)에 void 사용

int main(void)
{
    print_char('@', 5); // 문자와 숫자를 주고 함수 호출

    return 0;
}

// 문자와 숫자를 인수로 받으면 문자를 숫자만큼 출력하는 함수
void print_char(char ch, int count) // 매개변수는 있으나 반환형은 없음
{
    int i;
    if (count > 10) return;  // 여기서 return하면 조건문에 따라 함수 실행 종료
    for ( i = 0; i < count; i ++ )
    {
        printf("%c", ch);
    }

    //return;
    // 반환값이 없는 함수는 return을 단독 사용, 생략도 가능
}