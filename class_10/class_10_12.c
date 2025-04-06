#include <stdio.h>

/*
함수의 매개변수 자리에 배열을 선언하는 경우,
배열의 저장 공간이 할당되지 않으며, 배열명은 컴파일 과정에서 첫 번째 배열 요소를 가리키는 포인터로 바뀐다.
*/

void print_ary(int *p);

int main()
{
    int ary[5] = {1, 2, 3, 4, 5};
    print_ary(ary); // 매개변수로 ary배열 전달
    printf("\n");
    print_ary(&ary[2]); // 매개변수로 ary 3번째 배열 요소 전달 

    return 0;
}

void print_ary(int p[3])    // 매개변수 자리에 포인터 변수 p로 배열 요소 선언
{
    for (int i = 0; i < 5; i++)
    {
        printf("%5d", p[i]);
    }
}