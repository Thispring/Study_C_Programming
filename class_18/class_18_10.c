/*
스트림 파일의 버퍼 공유 문제와 fflush 함수:
스트림 파일을 사용하는 입출력 함수들이 버퍼를 공유하면 예상과 다른 결과가 나올 수 있습니다.
*/
// a4.txt
// 17
// Hong GD
//
#include <stdio.h>

int main(void)
{
    FILE *fp;   // 파일 포인터
    int age;    // 나이 저장 변수
    char name[20];  // 이름 저장 배열

    fp = fopen("a4.txt", "r");  // 파일 개방

    fscanf(fp, "%d", &age); // 나이 입력
    //fgetc(fp);    // fgetc를 사용하여, 스트림 버퍼의 개행 문자를 읽어내는 방법을 사용
    fgets(name, sizeof(name), fp);  // 이름 입력
    /*
    fscanf와 fgets의 개행 문자 처리 방식이 다르기 때문에 이름이 출력되지 않음
    스트림 파일의 버퍼:
    17\nHong GD <- fscanf가 17까지 함수 입력을 하고 \n을 남겨두었기 때문에 다음 fgets에서
    개행문자를 받고 함수가 종료되어 이름이 출력되지 않음

    *공유된 버퍼에 어떠한 데이터가 있고, 입출력 함수들이 어떤 조건까지 작동하는지를 유의하여
    알맞은 버퍼제거가 필요합니다.
    ex) fflush 함수는 모든 버퍼를 제거할 수 있지만, 버퍼에 출력할 데이터가 남아있다면 부적절
    */
    

    printf("나이: %d, 이름: %s", age, name);    // 입력 데이터 출력
    fclose(fp); // 파일 닫음
    
    return 0;
}
