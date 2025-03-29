#include <stdio.h>

int main()
{
    unsigned int a; // 양수, 음수로 이루어진 데이터 값 중 양수만을 사용해서 더 넓은 범위의 값을 저장
    signed int b; // unsigned가 없으면 자동으로 signed로 선언

    // unsigned는 %u로 출력, 아래는 잘못 사용한 예
    a = 4294967295;
    printf("%d\n", a);
    a = -1;
    printf("%u\n", a);
    // signed의 값이 넘칠 때의 예
    b = 4294967295;
    printf("%d\n", b);

    return 0;
}