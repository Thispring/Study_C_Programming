#include <stdio.h>

/*
2차원 char 배열 초기화:
2차원 char 배열 초기화는 다른 배열처럼 배열 요소를 하나씩 초기화 하거나
각 행의 단위를 문자열로 초기화하는 방법이 있습니다.
*/
int main()
{
    char animal1[2][10] = {
        {'d', 'o', 'g', '\0'},
        {'c', 'a', 't', '\0'}
    };  // 문자 상수로 하나씩 초기화
    
    // 문자열 상수로 한 행씩 초기화, 행의 수 생략 가능
    char animal2[][10] = { "dog", "tiger", "rabbit", "cat" };
    
    // 남는 공간은 널 문자로 채워집니다.
    for (int i = 0; i < 2; i++)
    {
        printf("%s\n", animal1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", animal2[i]);
    }

    return 0;
}