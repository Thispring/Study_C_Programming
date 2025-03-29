#include <stdio.h>
// 배열

int main(void)
{
    int ary[5]; // 배열은 int(자료형)ary(배열명)[5](요소개수)로 구성됨

    // 배열은 0부터 시작
    // 배열의 사용
    // 배열은 [배열에서의 위치(첨자)]에 숫자를 넣어 사용
    ary[0] = 1;
    scanf("%d", &ary[1]);

    printf("ary[0]: %d\n", ary[0]);
    printf("ary[1]: %d\n", ary[1]);
    printf("ary[2]: %d\n", ary[3]);   // 남는 배열 공간에 값이 없다면 쓰레기 값으로 저장

    return 0;
}