#include <stdio.h>
#include <stdlib.h>

// 1. 4행 5열의 행렬의 값을 저장할 2차원 배열을 동적 할당하는 코드를 작성하세요.
// 2. 1번에서 만든 동적 할당 영역을 반환하는 코드를 작성하세요.
int main(void)
{
    int i;

    int **matrix = (int **) malloc(4 * sizeof(int *));
    // 포인터 배열로 사용할 공간의 동적 할당
    for (i = 0; i < 4; i++)
    {
        matrix[i] = (int *) malloc(5 * sizeof(int));
    }

    for (i = 0; i < 4; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}