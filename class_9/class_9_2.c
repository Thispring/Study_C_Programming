#include <stdio.h>

// scanf와 포인터
int main(void)
{
    int a;
    int *pa;
    pa = &a;

    printf("일반변수 입력:\n");
    scanf("%d", &a);    // &는 주소 연산자로, scanf는 변수 a의 저장공간을 찾아 키보드 입력값을 저장
    printf("포인터 변수 입력:\n");
    scanf("%d", pa);    // 포인터를 사용해서 변수a의 저장공간을 찾기, 포인터pa 값은 &a(a의 주소값)

    printf("일반변수 입력값은 %d 입니다.\n", a);
    printf("포인터 입력값은 %d 입니다.\n", pa); // 공간값 출력
    
    return 0;
}