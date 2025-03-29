#include <stdio.h>
// 매개변수가 없는 함수
// 키보드를 통해 값을 받을 때 활용

int get_num(void);  // 함수 선언, 매개변수가 없으므로 (void) 표기

int main (void)
{
    int result;

    result = get_num(); // 함수 호출, ()빈괄호 사용, (void)는 호출할 때 사용 X 
    printf("반환값: %d\n", result);
    return 0;
}

// 양수를 입력 받는 함수
int get_num(void)   // 매개변수가 없고 반환형만 있음
{
    int num;    // 키보드 입력 값을 반환해야 하기 때문에 사용

    printf("양수 입력: ");
    scanf("%d", &num);  // scanf를 통해 값 입력
    while(num < 0)  // 음수 입력 시 입력 과정 반복
    {
        printf("양수를 입력하세요!\n");
        printf("양수 입력: ");
        scanf("%d", &num); 
    }

    return num; // 키보드로 받은 num 값을 반환
}