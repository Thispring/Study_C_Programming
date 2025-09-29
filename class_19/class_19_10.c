/*
헤더 파일의 필요성과 중복 문제 해결 방법:
분할 컴파일 시 함수, extern, 구조체 선언 등을 헤더 파일로 만들면 필요할 때 인클루드하여
쉽게 공유 및 수정할 수 있습니다.

하지만 파일 간의 포함 관계로 인해 중복 선언이 되어 컴파일 에러가 발생할 수 있습니다.
중복 포함 문제를 해결하기 위해 조건부 컴파일 전처리 명령을 사용할 수 있습니다.
*/

// 선의 가운데 점의 좌표를 구하는 예제
#include <stdio.h>
#include "point.h"  // Point 구조체 선언
#include "line.h"   // Line 구조체 선언 -> line.h 에 point.h 헤더 파일이 포함되어 있어 중복 선언 에러가 발생
// 현재 point.h에 조건부 컴파일 전처리로 인해 구조체 선언이 되지 않음

int main(void)
{
    Line a = { {1, 2}, {5, 6} };    // Line 구조체 변수 초기화
    Point b;                        // 가운데 점의 좌표 저장

    b.x = (a.first.x + a.second.x) / 2; // 가운데 점의 x좌표 계산
    b.y = (a.first.y + a.second.y) / 2; // 가운데 점의 y좌표 계산
    printf("선의 가운데 점의 좌표: (%d, %d)\n", b.x, b.y);

    return 0;
}