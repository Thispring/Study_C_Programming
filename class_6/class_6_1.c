#include <stdio.h>
// 중첩 반복문

int main()
{
    int i, j;

    for(i = 0; i < 3; i++)  
    {
        for (j = 0; j < 5; j++) 
        {
            printf("*");    // j for문을 통해 *을 5번 출력 후 for문 종료
        }
        printf("\n");   // j for문이 끝나면 i for문의 "\n" 출력 후 1회 종료, i < 3까지 j for문과 i for문 반복
    }
    /*
    이중 for문 주의사항
    for(i = 0; i < 3; i++)
        for(i = 0; i < 5; i++)
    위와 같은 예시에서는 안쪽 for문으로 인해 i 값의 변화가 생겨 바깥쪽 for문의 반복에 영향을 줍니다.
    (안쪽 for문 5번 반복 후 바깥 for문 반복 X)

    중첩 반복문의 조건 값을 같이 쓰는 것 외에 다른 곳에서 값의 변화가 있는지도 확인하기
    */
    
    return 0;
}