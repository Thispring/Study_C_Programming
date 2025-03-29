#include <stdio.h>

int main()
{
    char buger[20];

    printf("주문 도와드리겠습니다.");
    scanf("%s", buger);

    printf("주문하신게 %s 맞으실까요?", buger);
    return 0;
}