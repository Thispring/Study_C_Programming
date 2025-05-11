#include <stdio.h>

/*
함수끼리 데이터를 공유하는 방법 중
'값을 복사해서 전달하는 방법'
*/
int add_ten(int a);

int main()
{
    int a = 10; // main 함수에서 선언한 변수 a
    printf("main 함수의 a의 주소 값: %p\n", &a);
    a = add_ten(a); // main 함수 a 변수를 복사하여 전달
    printf("a: %d\n", a);

    return 0;
}

int add_ten(int a)
{
    a = a + 10; // main 함수에서 받은 a를 가지고 연산
    printf("add_ten 함수의 a의 주소 값: %p\n", &a);
    // 여기서 l-value a는 다른 메모리 주소를 가집니다.
    return a;   // 연산이 완료 된 a의 값을 반환하여 전달
}