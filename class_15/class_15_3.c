#include <stdio.h>

/*
이중 포인터 활용2:
포인터 배열을 매개변수로 받는 함수
*/
// 포인터 배열을 활용하여 여러 개의 문자열 출력하는 함수
void print_str(char **pps, int cnt);

int main()
{
    char *ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};
    int count;  // 배열 요소 수를 저장할 변수

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);   // 배열 요소의 수 계산
    print_str(ptr_ary, count);  // 배열명과 배열 요소를 주고 호출

    return 0;
}

void print_str(char **pps, int cnt) // 매개변수로 이중 포인터 사용
{
    for (int i = 0; i < cnt; i++)
    {
        printf("%s\n", pps[i]); // 이중 포인터를 배열명처럼 사용
    }
}