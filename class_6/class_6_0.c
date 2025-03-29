#include <stdio.h>
// 반복문: while, for, do~while

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    while (a < 10)  // 조건식, while문은 조건식이 거짓이 될 때까지 실행문 반복
    {
        a = a * 2; // 실행문
        printf("a : %d\n", a);  // 실행문
    }
    printf("최종a값 : %d\n", a);
    
    int i;    
    for(i = 0; i < 3; i++)  // for문은 (초기식, 조건식, 증감식)으로 이루어져 있으며, 초기식 값을 조건식이 거짓이 될 때까지 증감하며 반복합니다.
    {
        b += 1;
        printf("b : %d\n", b);
    }
    printf("최종b값 : %d\n", b);
    /*
    for문을 사용할 때, 반복 횟수를 알기 쉽게 작성하는 것이 좋으며,
    ex) for(i = 0; i < 3; i++) == for(i = 0; i < 7; i += 3) <- 두 식의 반복은 같지만 후자처럼 사용 X
    초기식의 값이 영향을 받지 않도록(받는다면 의도가 있을 것) 하는것이 좋습니다.
    ex)
    for(i = 0; i < 10; i++)
        i += 2; <- i값이 변경되면서 반복횟수에 영향을 미침
    */
    
    do
    {
        c = c * 2;  // 반복문장
        printf("c : %d\n", c);
    } while (c < 10);   // 반복조건
    printf("최종c값 : %d\n", c);
    /*
    do~while문은 조건식을 먼저 확인하는 for, while과 다르게 실행문장을 실행시키고, 반복조건을 확인하여 반복조건이 거짓이 될 때 까지 반복합니다.
    ex) a = 1;
    while(a==0)          do
    {                    {
    a += 1;                 a += 1;                
    }                    }while(a==0)

    위 둘은 둘다 거짓이지만, do~while만 a+=1을 1번 실행합니다. 
    */

    return 0;
}