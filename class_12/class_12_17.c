#include <stdio.h>

/*
직접 만드는 strcmp 함수
strcmp 함수가 문자열을 비교하는 방식은
비교할 두 배열의 각 요소의 아스키 코드 값의 크기를 비교합니다.
만약 첫 문자가 같으면 다음 문자의 아스키 코드 값을 차례로 비교합니다.
아스키 코드 값이 크면 사전의 뒤에 나오는 문자열이며, '\0' 널 문자의 아스키 코드 값은 0 입니다.
순서를 판단한 결과는 반환값으로 알려줍니다.
*/
int my_strcmp(char *pa, char *pb);

int main()
{
    int comp = 0;
    char str1[80] = "apple";
    char str2[80] = "applepie";
    comp = my_strcmp(str1, str2);

    if (comp > 0)
    {
        printf("str2가 사전에 먼저 나옵니다.\n");
    }
    else
    {
        printf("str1가 사전에 먼저 나옵니다.\n");
    }
    
    return 0;
}

int my_strcmp(char *pa, char *pb)
{
    while ((*pa == *pb) && (*pa != '\0'))   // 두 문자가 같으나 널 문자가 아닌 경우
    {
        pa++;   // 다음 문자로 이동
        pb++;   // 다음 문자로 이동
    }

    // 반복문 이후 이 시점에서는 두 문자가 다르거나 둘 다 널 문자
    if (*pa > *pb) return 1;    // 앞 문자의 아스키 코드 값이 크면 1 반환
    else if (*pa < *pb) return -1;  // 뒷 문자의 아스키 코드 값이 크면 1 반환
    else return 0;  // 둘 다 널 문자이므로 같은 문자열
}