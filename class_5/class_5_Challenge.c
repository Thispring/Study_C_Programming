/*
도전1:
계산기 프로그램
키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성하세요.
정수 사칙연산만 입력합니다.

tip: 연산기호(+,-,*,/)도 하나의 문자입니다.
*/
#include <stdio.h>

int main(void)
{
    int inputNum1;
    int inputNum2;
    char operator;

    printf("첫 번째 숫자 입력\n");
    scanf("%d", &inputNum1);

    printf("두 번째 숫자 입력\n");
    scanf("%d", &inputNum2);
    
    printf("연산 기호 입력\n");
    // _%c로 버퍼에 남아있는 개행문자 건너뛰기
    scanf(" %c", &operator);
    
    switch (operator)
    {
    case '+':
        printf("%d", inputNum1 + inputNum2);
        break;
    case '-':
        printf("%d", inputNum1 - inputNum2);
        break;
    case '*':
        printf("%d", inputNum1 * inputNum2);
        break;
    case '/':
        printf("%d", inputNum1 / inputNum2);
        break;
    default:
        printf("잘못된 수식 입력입니다.\n");
        break;
    }

    return 0;
}
