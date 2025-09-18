/*
fscanf, fprintf : 다양한 형태의 입출력:
파일에 저장된 문자열을 숫자로 변환하여 입력할 때는 fscanf 함수를 사용합니다.
반대로 정수나 실수를 쉽게 파일에 출력할 때는 fprintf 함수를 씁니다.
*/
// a3.txt 파일
// 소원 95 99 96
// 유주 80 85 94
// 신비 92 76 93
#include <stdio.h>

int main(void)
{
    FILE *ifp, *ofp;    // 파일 포인터 선언
    char name[20];      // 이름
    int kor, eng, math; // 세 과목 점수
    int total;          // 총점
    double avg;         // 평균
    int res;            // fscanf 함수의 반환값 저장

    ifp = fopen("a3.txt", "r");  // 입력 파일을 읽기 전용으로 개방
    if (ifp == NULL)            // 개방 여부 확인
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

    ofp = fopen("b3.txt", "w");  // 출력 파일을 쓰기 전용으로 개방
    if (ofp == NULL)            // 개방 여부 확인
    {
        printf("출력 파일을 열지 못했습니다.\n");
        return 1;
    }

    while (1)
    {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math); // 데이터 입력
        // fscanf 함수가 .txt 의 문자열 데이터를 지정한 형태의 변수로 변환

        if (res == EOF)     // 파일의 데이터를 모두 읽으면 EOF 반환
        {
            break;
        }
        total = kor + eng + math;   // 총점 계산
        avg = total / 3.0;          // 평균 계산
        fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);    // 이름, 총점, 평균 출력
        // fprintf에 지정한 변수를 문자열 데이터로 변환하여 파일에 출력
    }
    
    fclose(ifp);    // 입력 파일 닫기
    fclose(ofp);    // 출력 파일 닫기

    return 0;
}