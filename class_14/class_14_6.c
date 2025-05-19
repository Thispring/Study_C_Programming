#include <stdio.h>

/*
포인터 배열의 초기화:
char형 기준으로 포인터 배열의 초기화는 2차원 char 배열의 초기화와 같습니다.
선언과 동시에 문자열 상수로 초기화 하는 것도 가능합니다.

단, 포인터 배열은 문자열의 시작주소를 배열 요소에 저장하고, 2차원 char 배열은 
문자열 자체를 배열의 공간에 저장하는 차이점이 존재합니다.
*/
int main()
{
    char *pary[5] = { "dog", "elephant", "horse", "tiger", "lion" };
    char animal[5][20] = { "dog", "elephant", "horse", "tiger", "lion" };

    for (int i = 0; i < 5; i++)
    {
        printf("*pary: %s\n", pary[i]);
        //printf("*pary: %c\n", pary[i]);   // 포인터에서 시작주소만으로 문자하나를 출력하는게 불가능하므로 오류
        printf("animal: %c\n", animal[i][i]);
        //printf("animal: %s\n", animal[i][i]); // animal[i][i]에서 오른쪽[i]는 배열의 열 부분의 첫 번째 주소를 가리킴
    }

    return 0;
}