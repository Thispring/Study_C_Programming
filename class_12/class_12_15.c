#include <stdio.h>

/*
직접 만드는 strlen 함수
strlen 함수가 문자열을 계산하는 방식은
배열에 저장된 문자열에서 널 문자가 나올 때까지 문자 수를 세어 반환합니다.
*/
int my_strlen(char *ps);   // 정수값을 반환하기에 int형으로 함수 선언 

int main()
{
    int count = 0;
    char str1[80] = "apple";
    count = my_strlen(str1);
    printf("str1의 문자 개수는: %d\n", count);

    return 0;
}

int my_strlen(char *ps)
{
    int cnt = 0;
    while (*ps != '\0')
    {
        cnt++;  // 문자 수 증가
        ps++;   // 다음 문자의 위치로 이동
    }

    return cnt; // 증가한 문자 수 반환
}