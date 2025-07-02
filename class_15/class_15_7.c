#include <stdio.h>

/*
다차원 배열과 포인터 - 다차원 배열은 배열 포인터다
*/
/*
int main()
{
    int arr2d[3][3];

    printf("%p %p %p \n", arr2d, arr2d[0], &arr2d[0][0]);
    printf("%p %p    \n", arr2d[1], &arr2d[1][0]);
    printf("%p %p.   \n", arr2d[2], &arr2d[2][0]);

    printf("sizeof(arr2d): %d \n", sizeof(arr2d));  // 전체 배열 크기
    printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));    // 한 행 크기
    printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
    printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));

    printf("%p %p %p \n", arr2d, arr2d+1, arr2d+2); // (int 4바이트 * 행 개수 3)만큼 증가

    return 0;
}
*/

// Quiz
// 1. (ㄱ)에 적절한 방식으로 ptr을 선언하시오.
// 2. 출력은 무엇인가?
int main()
{
    int arr1[2][2] = {
        {1, 2}, {3, 4}
    };
    int arr2[3][2] = {
        {1, 2}, {3, 4}, {5, 6}
    };
    int arr3[4][2] = {
        {1, 2}, {3, 4}, {5, 6}, {7, 8}
    };
    // (ㄱ)
    int (*ptr) [2];
    int i;
    ptr = arr1;
    printf("** Show 2,2 arr1 **\n");
    for (i = 0; i < 2; i++)
        printf("%d %d \n", ptr[i][0], ptr[i][1]);
    ptr = arr2;
    printf("** Show 3,2 arr2 **\n");
    for (i = 0; i < 3; i++)
        printf("%d %d \n", ptr[i][0], ptr[i][1]);
    ptr = arr3;
    printf("** Show 4,2 arr3 **\n");
    for (i = 0; i < 4; i++)
        printf("%d %d \n", ptr[i][0], ptr[i][1]);
}