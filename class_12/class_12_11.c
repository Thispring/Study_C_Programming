#include <stdio.h>

/*
직접 만드는 strcpy 함수
strcpy 함수가 문자열을 복사하는 방식은
문자열의 첫 번째 문자부터 널 문자가 나올 때까지 문자를 하나씩
복사할 배열에 옮겨 저장합니다.
*/
char *my_strcpy(char *pd, char *ps);    // 복사할, 복사받을 포인터 변수 2개 선언

int main()
{
    char str[80] = "strawberry";
    char str2[80] = "apple";

    printf("바꾸기 전 후 문자열: %s\n", str);
    my_strcpy(str, str2);    // *pd에 str배열 연결, *ps에 "apple"연결
    printf("바꾼 후 문자열: %s\n", str);
    printf("다른 문자열 대입: %s\n", my_strcpy(str, "kiwi"));
    
    return 0;
}

char *my_strcpy(char *pd, char *ps)
{
    char *po = pd;  // pd 값을 나중에 반환하기 위해 보관

    while (*ps != '\0')
    {
        int a = 0;
        *pd = *ps;  // 변경할 pd 포인터가 연결한 값에 ps가 연결한 포인터가 연결한 값을 대입
        pd++;   // 다음 주소의 값을 참조하기 위해, 포인터 변수 +1을 하여, 다음 주소로 연결
        ps++;   // 다음 주소의 값을 참조하기 위해, 포인터 변수 +1을 하여, 다음 주소로 연결
    }
    *pd = '\0'; // 복사 받을 곳의 끝에 널 문자를 붙여야, 해당 문자까지만 인식하여 복사가 가능

    return po;  // 복사가 끝난 저장 공간의 시작 주소 반환
}