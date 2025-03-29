#include <stdio.h>
// 의도한 값이 어떻게 나오는지가 더 중요
// 중요한 것은 명확한 코드, 경제성 < 정확성

int main()
{
    int a = 5;
    int b = 5;
    int c = 5;

    int pre, post, what;

    pre = (++a) * 3;
    post = (b++) * 3;
    what = (++c) + c + (++c); // 지양할 코드

    printf("초기값 a = %d, b = %d\n", a, b);
    printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);
    // 피연산자의 개수가 연산의 우선순위를 결정 -> 단항 > 이항 > 삼항 > 후위표기 연산
    // 후위표기는 증가되기 전의 값이 결과가 된다.
    printf("what the: %d\n", what);
    // 위 수식은 C 언어 표준에 없기 때문에 컴파일러에 따라 결과값이 달라짐

    return 0;
}