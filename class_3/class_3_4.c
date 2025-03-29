#include <stdio.h>
#include <string.h> // strcpy 함수 사용을 위해 선언

// 문자열 저장: 배열을 만들어서 사용
// 컴파일러가 끝에 '널 문자'를 추가하기 때문에, 문자열의 길이보다 +1

int main()
{
    char fruit[20] = "strawberry";

    printf("딸기: %s\n", fruit); // %s로 출력
    printf("딸기쨈: %s %s\n", fruit, "jam"); // 문자열 상수를 직접 %s로 출력
    // 배열에서는 '=' 사용 X
    // fruit = "banana";

    strcpy(fruit, "banana"); // fruit에 banana 복사
    printf("%s\n", fruit);

    return 0;
}