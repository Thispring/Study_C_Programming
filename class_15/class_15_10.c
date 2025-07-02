#include <stdio.h>

/*
void 포인터:
void 포인터는 가리키는 자료형이 정해지지 않은 포인터 입니다.
자료형이 정해져 있지 않으므로 어떤 주소든 저장할 수 있지만, 간접 참조 연산이나
정수 덧셈 등의 포인터 연산이 불가능합니다. 연산을 위해서는 형 변환이 필수 입니다.
자료형과 독립된 코드를 작성할때 주로 사용합니다.
*/
int main()
{
    int a = 10;
    double b = 3.5;
    void *vp;   // void 포인터

    vp = &a;    // int형 변수의 주소 저장
    printf("a: %d\n", *(int *)vp);

    vp = &b;    // double형 변수의 주소 저장
    printf("b: %.1f\n", *(double *)vp);

    return 0;
}