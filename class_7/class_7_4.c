#include <stdio.h>
// 매개변수와 반환값이 모두 없는 함수
// 함수의 매개변수와 반환형에 void 사용
// 함수 정의에 return문 사용이 없음

void print_line(void);

int main(void)
{
    // 호출은 수식의 일부가 아닌 독립된 문장으로 사용
    print_line();   
    print_line();
    print_line();

    return 0;
}

// 일정한 문자열을 여러 번 출력하는 함수
void print_line(void)
{
    int i;

    for ( i = 0; i < 50; i ++ )
    {
        printf("_");
    }
    printf("\n");
}