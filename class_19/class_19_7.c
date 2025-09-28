/*
#pragma 지시자:
#pragma 지시자는 지시명(directive-name)을 통해 컴파일러의 어떤 기능을 제어할 것인지 알려주어
컴파일러의 컴파일 방법을 세부적으로 제어할 수 있습니다.

pack은 구조체의 패딩 바이트 크기를 결정하며, warning은 경고 메시지를 관리합니다.
*/
#include <stdio.h>
#pragma pack(push, 1)   // 바이트 얼라인먼트를 1로 설정
typedef struct 
{
    char ch;
    int in;
} Sample1;

#pragma pack(pop)       // 바꾸기 전의 바이트 얼라인먼트 적용
typedef struct 
{
    char ch;
    int in;
} Sample2;

int main(void)
{
    printf("Sample1 Size: %d\n", sizeof(Sample1));
    printf("Sample2 Size: %d\n", sizeof(Sample2));

    return 0;
}
