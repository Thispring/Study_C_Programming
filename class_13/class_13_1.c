#include <stdio.h>

/*
지역 변수는 어느 블록에 선언하는지에 따라 사용 범위가 달라질 수 있습니다.
블록에 따른 규칙:
1. 특정 블록 안에 변수를 선언하면 사용 범위가 블록 내부로 제한됩니다.
2. 이름이 같아 사용 가능한 변수가 둘 이상이라면 가장 가까운 블록에 선언된 변수를 사용합니다.
*/
void sameName();

int main()
{
    int a = 10, b = 20;

    printf("교환 전 a와 b의 값: %d, %d\n", a, b);
    {       // 블록 시작
        int temp;

        temp = a;
        a = b;
        b = temp;
    }   // 블록 끝
    printf("교환 후 a와 b의 값: %d, %d\n", a, b);

    sameName();
    return 0;
}

void sameName()
{
    int c = 10, d = 20; // 해당 변수는 아래 블록 안에 새로 선언된 변수 c, d에 의해 사용 범위가 가려짐

    printf("교환 전 c와 d의 값: %d, %d\n", c, d);
    {       // 블록 시작
        int c, d, temp; // 해당 블록에서는 새로 선언된 c, d 변수를 우선 사용

        temp = c;
        c = d;
        d = temp;
    }   // 블록 끝
    printf("교환 후 c와 d의 값: %d, %d\n", c, d);
}