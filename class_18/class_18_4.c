/*
기본적으로 개방되는 표준 입출력 스트림 파일:
운영체제는 프로그램을 실행할 때 기본적으로 3개의 스트림 파일을 만듭니다.
그리고 이들을 키보드와 모니터 등에 연결하여 입출력 함수들이 파일 포인터 없이 사용할 수 있도록 제공합니다.

stdin: 표준 입력 스트림, 키보드와 연결
stdout: 표준 출력 스트림, 모니터와 연결
stderr: 표준 에러 스트림, 모니터와 연결
*/
#include <stdio.h>

int main(void)
{
    int ch; // 입력한 문자를 저장할 변수

    while(1)
    {
        // getchar 함수 내부적으로 stdin 사용
        ch = getchar(); // 키보드에서 문자 입력
        if(ch == EOF)   // Ctrl + Z 로 입력 종료
        {
            break;
        }
        // putchar 함수 내부적으로 stdout 사용
        putchar(ch);    // 화면에 문자 출력
    }

    return 0;
}