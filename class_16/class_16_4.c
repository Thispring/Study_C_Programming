#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
동적 할당 영역에 저장한 문자열을 함수로 처리하는 예:
동적 할당한 저장 공간을 함수로 처리할 때는 할당한 공간의 구조를
잘 살피어, 함수의 매개변수를 선언합니다.
*/
void print_str(char **ps);   // 동적 힐당 영역의 문자열을 출력하는 함수

int main(void)
{
    char temp[80];  // char 배열
    char *str[21] = { 0 };  // 문자열을 연결할 포인터 배열, 널 포인터로 초기화
    int i = 0;  // 반복 제어 변수

    while (i < 20)  // 최대 20까지 입력
    {
        printf("문자열을 입력하세요: ");
        gets(temp);
        if (strcmp(temp, "end") == 0) break;    // end가 입력되면 반복 종료
        // 문자열 비교함수 strcmp를 이용
        str[i] = (char *)malloc(strlen(temp) + 1);  // 문자열 저장 공간 할당
        strcpy(str[i], temp);
        i++;
    }  
    print_str(str);         // 입력한 문자열 출력

    for (i = 0; str[i] != NULL; i++)    // str에 연결된 문자열이 없을 때까지
    {
        free(str[i]);   // 동적 할당 영역 반환
    }

    return 0;
}

void print_str(char **ps)   // 이중 포인터 선언
{
    while (*ps != NULL) // 포인터 배열의 값이 널 포인터가 아닌 동안 반복
    {
        printf("%s\n", *ps);    // ps가 가리키는 것은 포인터 배열의 요소
        ps++;                   // ps에 +1하여 다음 배열 요소를 가리킴
    }
}
/*
포인터 사용 주의 사항:
포인터나 포인터 배열을 auto 지역 변수로 선언하면 쓰레기 값이 주소로 존재합니다. 
만약 쓰레기 값이 참조가 불가능한 코드 영역의 주소이고 부주의로 이 값을 참조한다면 프로그램은 중간에 실행을 멈춥니다.
따라서 포인터 배열은 선언과 동시에 널 포인터로 초기화하고 참조할 때 널 포인터인지를 검색하면 안정적인 프로그래밍이 가능합니다.
*/