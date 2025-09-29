/*
분할 컴파일에서 extern과 static의 용도:
서로 다른 파일에 선언된 전역 변수를 사용할 때는 extern 선언을 합니다.
반면에 다른 파일에서 전역 변수를 공유하지 못하게 할 때는 static을 선업합니다.

extern 선언 시, 같은 이름의 전역 변수가 중복되어 오류가 발생 할 수 있으므로
사전에 중복을 차단하는 것이 좋습니다.

함수에 static 예약어를 사용하면 함수를 정의한 소스 파일에서만 사용할 수 있습니다.
ex) static int input_data(void) {...}
함수 선언은 기본적으로 extern 선언으로 간주됩니다.
*/

// 전역 변수에 extern과 static을 사용해 양수 입력을 받고, 입력된 양수의 개수와 합, 평균을 구하는 프로그램
// main, print_data 함수정의
// 링크된 함수를 호출합니다.
#include <stdio.h>

int input_data(void);   // 양수를 입력하고 그 합을 반환
double average(void);   // 평균을 구하는 함수
void print_data(double);    // 출력 함수

int count = 0;  // 입력한 양수의 누적
static int total = 0;   // 입력한 양수의 합

int main(void)
{
    double avg; // 입력한 양수의 평균

    total = input_data();   // 양수를 입력하고 그 합을 반환
    avg = average();    // 평균 계산
    print_data(avg);    

    return 0;
}

// 입력한 양수의 개수, 전체 양수의 합과 평균을 출력합니다.
void print_data(double avg)
{
    printf("입력한 양수의 개수: %d\n", count);
    printf("전체 합과 평균: %d, %.1f\n", total, avg);
}