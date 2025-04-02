#include <stdio.h>

/*
배열명과 포인터의 차이
1. sizeof 연산의 결과가 다릅니다.
2. 변수(포인터)와 상수(배열명)의 차이가 있습니다.
*/
int main(void)
{
    int ary[3] = { 10, 20, 30 };
    int *p = ary;
    int i;
    printf("배열의 크기: %lu\n", sizeof(ary));   // sizeof 배열명일 경우 배열 전체 크기를 구함
    printf("포인터의 크기: %lu\n", sizeof(p));   // sizeof 포인터일 경우 포인터 하나의 크기를 구함
    
    printf("포인터를 이용한 배열의 값: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *p); // p가 가르키는 배열 요소 추력
        p++;            // 다음 배열 요소를 가리키도록 pa 값 증가
        // ary++;          // 배열명은 상수이므로 값을 변경할 수 없다.
    }
    printf("\n");
    printf("배열 대괄호 연산을 이용한 배열의 값: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", ary[i]);
    }
    
    return 0;
}