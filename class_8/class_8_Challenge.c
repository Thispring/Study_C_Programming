/*
도전1:
대소문자 변환 프로그램
키보드로부터 문장을 입력받은 후에 대문자를 찾아 소문자로 바꾸는 프로그램을 작성하세요.
바뀐 문장과 바뀐 문자의 수도 함께 출력합니다.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[100];
    int letterCount = 0;

    printf("Input Sentence: \n");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Before Change Sentence: %s\n", sentence);
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] >= 65 && sentence[i] <= 90)
        {
            sentence[i] = sentence[i] + 32;
            letterCount++;
        }
            
    }

    printf("After Change Sentence: %s\n", sentence);
    printf("Change letter: %d\n", letterCount);
    
    return 0;
}