#include <stdio.h>

// getchar 함수도 버퍼를 사용하는 특징을 가지고 있습니다.
// getchar 함수를 사용한 문자열 입력

void my_gets(char *str, int size);  // 한 줄의 문자열을 입력하는 함수

int main()
{
    char str[10];   // 문자를 저장할 배열 선언

    my_gets(str, sizeof(str));  // 함수에 배열과, 배열의 크기를 매개변수로 전달
    printf("입력한 문자열: %s\n", str);

    return 0;
}

void my_gets(char *str, int size)
{
    int ch; // getchar함수의 반환값을 저장할 변수
    int i = 0;  // 배열의 첨자로 활용할 변수

    ch = getchar(); // 첫 번째 문자 입력
    while((ch != '\n') && (i < size -1))    // 널 문자를 만나는 조건을 통해 다음 문자 입력, size를 통해 배열의 크기만큼 문자 입력    
    {
        str[i] = ch;    // 입력한 문자를 배열에 저장
        i++;
        ch = getchar(); // 새로운 문자 입력
    }
    str[i] = '\0';  // 입력된 문자열의 끝에 널 문자를 저장
}