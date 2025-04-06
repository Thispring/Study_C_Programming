#include <stdio.h>

// 배열의 길이를 미리 매개변수로 받아, 함수 내 반복문 조건을 쉽게 변경할 수 있다. 
// 크기가 다른 배열을 출력하는 함수
void print_ary(int *p, int size);   // 함수선언, size는 배열의 크기 계산을 위한 변수

int main()
{
    int ary1[5] = {10, 20, 30, 40, 50};
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70};
    
    print_ary(ary1, 5); // int size로 5를 매개변수로 전달
    printf("\n");
    print_ary(ary2, sizeof(ary2)/sizeof(ary2[0]));  // int size에 sizeof연산을 통한 ary2의 배열크기를 매개변수로 전달

    return 0;
}

void print_ary(int *p, int size)
{
    int arySize = sizeof(p)/sizeof(p[0]);   // 함수에서 매개변수로 받은 포인터로 sizeof 계산을 하게 되면
    printf("arySize: %d\n", arySize);   // 배열의 크기가 아닌, 포인터 변수의 크기를 가지고 계산하기 때문에 배열의 크기를 구할 수 없음

    for (int i = 0; i < size; i++)  // 매개변수로 받은 size값 까지 실행
    {
        printf("%5d", p[i]);
    }
}