#include <stdio.h>

// 함수 사용을 통한 포인터를 사용해야하는 이유 알아보기
// 포인터를 사용한 두 변수의 값 교환 함수
void swap(int *pa, int *pb);

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b);   // a, b의 주소를 인수로 주고 함수 호출
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb) // 매개변수로 포인터 선언
{
    int temp;   // 교환을 위한 임시변수

    temp = *pa;
    *pa = *pb;
    *pb = temp;
    // *pa, *pb를 통한 a, b의 메모리에 있는 값을 참조해 교환
}
/*
c언어에서 블록끼리 나뉘어져있으면 같은 이름의 변수여도 다른 메모리에 저장이 된다.
ex) int main() int a;와 int temp() int a; 변수는 이름만 같고 다른 메모리 주소를 가진다.
다른 함수에서도 같은 변수를 사용하기 위해, 포인터를 이용하여 주소값을 이용해 해당 주소에 있는 값을 활용할 수 있다.
*/