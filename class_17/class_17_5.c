/*
구조체 변수는 대입 연산이 가능하므로 함수의 인수로 주거나 
함수에서 여러 개의 값을 구조체로 묶어 동시에 반환하는 것이 가능합니다.
*/
#include <stdio.h>

struct vision   // 시력 정보를 저장할 구조체
{
    double left;    
    double right;   
};

struct vision exchange(struct vision robot);    // 두 시력을 바꾸는 함수

int main(void)
{
    struct vision robot;    // 구조체 변수 선언

    printf("시력 입력: ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);    // 교환 함수 호출
    // 매개 변수로 구조체 변수를 사용 시, 멤버들의 값을 한꺼번에 줄 수 있음
    printf("바뀐 시력: %.1lf %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot) // 구조체를 반환하는 함수
{
    double temp;    // 교환을 위한 임시 변수

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;   // 구조체 변수 반환
}
