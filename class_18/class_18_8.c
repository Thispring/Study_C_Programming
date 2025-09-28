/*
fgets와 fputs : 한 줄씩 입출력:
파일에서 데이터를 한 줄씩 입력할 때는 fgets 함수를 사용합니다. 반면에 문자열을 파일에
출력할 때는 fputs 함수를 사용합니다. fgets 함수는 읽을 데이터의 크기가 큰 경우 저장 공간의
크기까지만 입력 할 수 있습니다.
*/
// a2.txt 에 
// monkey likes
// banana
// 입력
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *ifp, *ofp;    // 파일 포인터 선언
    //char str[5];          // fgets는 배열의 크기 까지만 입력하므로 결과가 달라짐
    char str[80];       // 입력한 문자열을 저장할 배열
    char *res;          // fgets 함수의 반환값을 저장할 변수

    ifp = fopen("a2.txt", "r"); // 입력 파일을 읽기 전용으로 개방
    if (ifp == NULL)    // 개방 여부 확인
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

    ofp = fopen("b2.txt", "w"); // 출력 파일을 쓰기 전용으로 개방
    if (ofp == NULL)    // 개방 여부 확인
    {
        printf("출력 파일을 열지 못했습니다.\n");
        return 1;
    }

    while(1)    // 문자열을 입력하고 출력하는 과정 반복
    {
        res = fgets(str, sizeof(str), ifp);
        if (res == NULL)    // 반환값이 널 포인터면 반복 종료
        {
            break;
        }
        str[strlen(str) - 1] = '\0';    // 개행 문자 제거 (개행 문자 자리에 널 문자 추가)
        fputs(str, ofp);
        fputs(" ", ofp);
    }

    fclose(ifp);    // 입력 파일 닫기
    fclose(ofp);    // 출력 파일 닫기

    return 0;
}
// fgets(입력할 배열, 배열의 크기, 파일포인터); <- fgets 함수 인수
// fputs(출력할 문자열, 파일포인터); <- fputs 함수 인수