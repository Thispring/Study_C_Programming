/*
매크로명을 만드는 #define:
#define은 매크로명을 정의하는 전처리 지시자로 사용법은
[#define    매크로명    치환될_부분] 와 같이 사용합니다.

매크로명은 다른 변수명과 쉽게 구분할 수 있도록 관례상 대문자로 작성하며
치환될 부분은 매크로명과 하나 이상의 빈칸을 둡니다.
*/
#include <stdio.h>
#define PI 3.14159      // 상수를 매크로명으로 정의
#define LIMIT 100.0     // 상수를 매크로명으로 정의
#define MSG "passed!"   // 문자열을 매크로명으로 정의
#define ERR_RPN printf("허용 범위를 벗어났습니다!\n")   // printf 출력을 매크로명으로 정의
// 매크로명을 정의할 때 치환될 부분이 길어 여러 줄에 써야 한다면 \로 연결합니다.
#define INTRO "Perfect C Language \
& Basic Data Structure"

int main(void)
{
    double radius, area;            // 반지름과 면적 변수

    printf("반지름을 입력하세요(10 이하): ");
    scanf("%lf", &radius);          // 반지름 입력
    area = PI * radius * radius;    // 면적 계산
    if (area > LIMIT) ERR_RPN;       // 면적이 100을 초과하면 오류 메시지 출력
    else printf("원의 면적: %.2lf (%s)\n", area, MSG);      // 면적과 메시지 출력

    printf("%s", INTRO);

    return 0;
}
/*
매크로명은 자주 사용하는 복잡한 숫자나 문자열 등 의미 있는 단어로 쉽게 표현할 수 있는 장점이 있지만
디버깅과 유지보수 면에서 사용자는 매크로명으로 작성된 소스 코드를 보게 되므로 어떤 문제가 있는지 즉시
확인하기 힘들다는 단점이 존재합니다. 따라서 매크로명은 필요한 경우에만 제한적으로 사용하는 것이 좋습니다.
*/