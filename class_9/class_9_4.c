#include <stdio.h>

// 포인터와 const
// const는 변수를 상수화
// 포인터는 const를 이용해 주소 혹은 값을 상수화
// const를 사용하면 선언과 동시에 초기화 필수
// 문자열 상수에서 주로 사용 된다고 함(함수의 매개변수를 통해 값을 변경할 수 없도록 하기 위해)
int main(void)
{
    int a = 10, b = 20;
    const int *pa = &a; // pa가 가리키는 a는 pa를 간접 참조하여 바꿀 수 없다는 뜻
    // *pa=20;과 같이 사용 불가
    printf("변수 a 값: %d\n", *pa); // 포인터를 간접 참조하여 a 출력
    pa = &b;                        // 포인터가 변수 b를 가리키게 한다.
    printf("변수 b 값: %d\n", *pa); // 포인터를 직접 참조하여 b값 출력
    pa = &a;                        // 포인터가 다시 변수 a를 가리킨다.                      
    a = 20;                         // a를 직접 참조하여 값을 바꾼다.
    printf("변수 a 값: %d\n", *pa); // 포인터로 간접 참조하여 바뀐 값 출력

    int c = 30;
    const int const *pc = &c;   // pc = &b와 같이 사용 불가, 포인터 변수를 상수화
    printf("변수 c 값: %d\n", *pc);

    return 0;
}