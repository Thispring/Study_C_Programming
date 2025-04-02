#include <stdio.h>

/*
포인터의 뺄셈과 관계 연산
가리키는 자료형이 같으면 포인터끼리의 뺄샘이 가능하며, 관계 연산자로 대소관계도 확인 할 수 있다.
포인터에서 뺄샘은:
포인터 - 포인터 -> 포인터 값의 차이 / 가리키는 자료형의 크기
로 연산이 진행된다.
*/
int main(void)
{
    int ary[5] = { 10, 20, 30, 40, 50 };
    int *pa = ary; // 배열의 첫 번째 요소 주소를 pa에 저장
    int *pb = pa + 3; // 배열의 네 번째 요소 주소를 pb에 저장

    printf("pa: %lu\n", pa);
    printf("pb: %lu\n", pb);

    pa++; // pa를 다음 배열 요소로 이동
    printf("pb - pa: %lu\n", pb - pa); // 포인터끼리의 뺄셈

    printf("앞에 있는 배열 요소의 값 출력: ");
    if (pa < pb) printf("%d\n", *pa);   // pa가 배열의 앞에 있으면 *pa 출력
    else printf("%d\n", *pb);           // pb가 배열의 앞에 있으면 *pb 출력

    return 0;
}