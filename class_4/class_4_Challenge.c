/*
도전1:
체중관리 프로그램
체중(kg)과 키(cm)를 입력하여 BMI(신체질량지수)를 구한 후에 BMI의 값이 20.0 이상 25.0 미만이면
"표준입니다"를 출력하고 그렇지 않으면 "체중관리가 필요합니다"를 출력합니다.

BMI는 표준체중, 저체중, 과체중을 판별하는 수치로 몸무게를 키의 제곱으로 나누어 구합니다.
이때 키는 미터(m)단위로 계산합니다.
*/
#include <stdio.h>

int main(void)
{
    // BMI 규칙 : 몸무게 / 키 * 키 (이 때 키는 m)
    // 키, 체중은 실수로 받기
    
    float height;
    float weight;
    float bmi;

    printf("체중을 입력하세요.\n");
    scanf("%f", &weight);

    printf("키를 입력하세요.\n");
    scanf("%f", &height);

    bmi = weight / ((height * height) / 10000);
    
    printf("bmi: %.1lf\n", bmi);
    if (bmi < 25.0 && bmi >= 20)
    {
        printf("표준입니다\n");
    }
    else
    {
        printf("체중관리가 필요합니다.\n");
    }

    return 0;
}