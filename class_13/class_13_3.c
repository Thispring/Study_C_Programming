#include <stdio.h>

/*
정적 지역 변수는 선언된 함수가 반환되더라도 그 저장 공간을 계속 유지합니다.
따라서 하나의 함수가 여러 번 호출되는 경우 같은 변수를 공유하는 것이 가능합니다.
정적 지역 변수는 static 예약어로 선언이 가능하며, 코드 블록 안에서 선언해야합니다.
*/
void auto_func();
void static_func();

int main()
{
    int i;

    printf("일반 지역 변수(auto)를 사용한 함수...\n");
    for (i = 0; i < 3; i++)
    {
        auto_func();
    }

    printf("정적 지역 변수(static)를 사용한 함수...\n");
    for (i = 0; i < 3; i++)
    {
        static_func();
    }
    
    return 0;
}

void auto_func()
{
    auto int a = 0;

    a++;
    printf("%d\n", a);
}

void static_func()
{
    static int a;   // 정적 지역 변수 선언, 자동 초기화

    a++;
    printf("%d\n", a);
}