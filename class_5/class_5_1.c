#include <stdio.h>
// switch~case문은 조건식에 해당하는 case를 찾아 실행시키는 선택문
// 조건식은 정수식만 사용하기(실수 사용X)

int main()
{
    int rank = 2, m = 0;

    switch (rank)
    {
    case 1: // rank가 1이면 m = 300 실행
        m = 300;
        break;  // 위 실행문이 맞다면 switch 종료
    case 2: // rank가 2이면 m = 200 실행   
        m = 200;
        break;
    case 3: // rank가 3이면 m = 100 실행
        m = 100;
        break;    
    default:    // 일치하는 case 값이 없으면 m = 10 실행
        m = 10;
        break;
    }

    printf("%d\n", m);

    int grade = 1, n = 0;

    switch (grade)  // break 없이도 사용은 가능함
    {
    case 1:
        n += 100;
    case 2:
        n += 100;
    case 3:
        n += 100;
    }

    printf("%d\n", n);

    return 0;
}