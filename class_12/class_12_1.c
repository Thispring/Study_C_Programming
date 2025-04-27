#include <stdio.h>

// 문자열을 배열처럼 주소로 사용할 수 있으므로, char 포인터에 대입하여 사용 할 수 있습니다.
// 포인터로 문자열을 사용하는 방법
int main()
{
    char *dessert = "apple";    // dessert에 apple의 주소가 연결되어 있으므로, dessert의 첫 번째 주소의 값은 a가 된다.

    printf("오늘 후식은 %s입니다.\n", dessert); // %s는 null문자까지 출력해주도록 설계되어있다.
    dessert = "banana"; // 새로운 문자열 대입, banana의 주소로 연결
    printf("내일 후식은 %s입니다.\n", dessert); // 바뀐 문자열 출력

    return 0;
}