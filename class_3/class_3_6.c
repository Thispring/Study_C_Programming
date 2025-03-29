#include <stdio.h>
// scanf 유의점
// 변수명 앞 '&' 붙이기
// 함수에서 사용한 변환 문자와 맞는 형태의 데이터 입력 ex) int(정수형) -> %d , float(실수형) -> %f

int main()
{
    double score;
    char grade;
    char name[20];

    printf("학점 입력: ");
    scanf("%c", &grade); // 문자 입력의 경우 \n(개행문자), 스페이스, Tab 등을 하나의 문자로 전달 
    printf("이름 입력: ");
    scanf("%s", name);
    printf("점수 입력: ");
    scanf("%lf", &score); // 문자열 입력의 경우 & 생략
    printf("%s의 학점은 %c 이며, 점수는 %0.1lf 입니다.\n", name, grade, score);

    return 0;
}