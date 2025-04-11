#include <stdio.h>

/*
scanf의 반환값과 비교하는 값인 -1 대신 EOF(End Of File)을 쓸 수 있습니다.
stdio.h 헤더 파일에 포함되어 있습니다.
*/
int main()
{
    int res;
    char ch;

    while (1)
    {
        res = scanf("%c", &ch);
        if (res == EOF) break;  // EOF는 -1로 바뀌므로 결국 res와 -1을 비교한다.
        printf("%d\n", ch);
    }

    return 0;
}