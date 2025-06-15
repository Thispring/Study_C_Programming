#include <stdio.h>

/*
이중 포인터 활용1:
포인터 값을 바꾸는 함수의 매개변수
*/
// 이중 포인터를 사용한 문자열 교환
void swap_ptr(char **ppa, char **ppb);  // 매개 변수로 포인터의 주소가 필요하기 때문에, 이중 포인터 사용

int main()
{
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb -> %s\n", pa, pb);

    return 0;
}

// 함수에서 문자열을 가리키는 포인터 끼리의 연결상태를 변경합니다.
void swap_ptr(char **ppa, char **ppb)
{
    char *pt;   // 교환을 위한 char 포인터 변수
    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}