#include <stdio.h>

/*
직접 만드는 strcat 함수
strcat 함수가 문자열을 추가하는 방식은
붙여넣을 배열에서 널 문자의 위치를 찾고 그 위치부터 붙여넣을 문자열을
복사한 뒤, 널 문자를 저장하여 마무리 합니다.
*/
char *my_strcat(char *pd, char *ps);

int main()
{
    char str1[80] = "apple";
    char str2[80] = "pie";

    printf("바꾸기 전 후 문자열: %s\n", str1);
    my_strcat(str1, str2);
    printf("바꾼 후 문자열: %s\n", str1);
    
    return 0;
}

char *my_strcat(char *pd, char *ps)
{
    char *po = pd;  // 배열의 처음 위치 보관

    while (*pd != '\0') // 기존 배열에서 널 문자 까지 카운팅
    {
        pd++;
    }
    // strcpy 복사 방식과 동일하게 진행
    while (*ps != '\0') 
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';

    return po;  // 붙여넣은 배열의 시작 위치 반환
}