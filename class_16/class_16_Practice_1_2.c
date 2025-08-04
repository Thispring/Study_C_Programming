#include <stdio.h>
#include <stdlib.h>

// 1. 4행 5열의 행렬의 값을 저장할 2차원 배열을 동적 할당하는 코드를 작성하세요.
// 2. 1번에서 만든 동적 할당 영역을 반환하는 코드를 작성하세요.
int main(void)
{
    int i, j = 0; // 2차원 배열 반복문을 위한 변수
    int count = 0;
    int **matrix = { 0 }; // 이중 포인터
    int *arr[4][5] = { 0 };

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            arr[i][j] = (int *)malloc(sizeof(int));
            if (arr[i][j] == NULL)
            {
                printf("메모리 부족\n");
                exit(1);
            }
            *arr[i][j] = count;
            count++;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d", *(arr[i][j]));
            free(arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
