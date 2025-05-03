#include <stdio.h>

/*
11강 도전 실전 예제:
길이가 가장 긴 단어 찾기

키보드로 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력하세요.
한 줄에 하나의 단어만 입력하며 Ctrl + Z를 누를 때까지 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력합니다.
배열은 사용하지 않고 작성하세요.
*/
int main()
{
    // 배열사용 금지이므로, 버퍼를 활용
    // '문자열'이 아닌 '문자'를 받아 카운트
    // 문자를 세는 반복문 1개와 EOF == -1 까지 반복하는 반복문 사용
    char ch;
    
    int count = 0;
    int maxCount = 0;

    ch = getchar(); // getchar함수로 '문자'를 받기
    while (ch != EOF)   // Ctrl + Z로 반복종료
    {
        count = 0; // 카운트 초기화

        if(ch == EOF)
            break;
        while (ch != '\n') // 개행문자가 아닐 때 까지 반복
        {
            count++;
            ch = getchar(); // getchar함수를 통해 버퍼에 남아있는 문자 받기
        }

        if (count > maxCount) // maxCount보다 count가 크다면
        {
            maxCount = count; // maxCount에 count값 대입
            printf("maxCount: %d\n", maxCount); 
        }
        ch = getchar(); // 마지막에 getchar를 통해 반복 실행
    }
    
    printf("가장 길이가 긴 단어: %d\n", maxCount);

    return 0;
}