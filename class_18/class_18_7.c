/*
개방 모드, fseek, rewind, feof 함수:
기본 파일 개방 모드에 '+'를 붙여 사용하면 읽고 쓰는 작업을 함께 할 수 있습니다.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;

    char str[20];

    fp = fopen("a.txt", "a+");  // 읽기 가능한 추가 모드로 개방
    if (fp == NULL)
    {
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }

    while (1)
    {
        printf("과일 이름: ");
        scanf("%s", str);               // 키보드로 과일 이름 입력
        if (strcmp(str, "end") == 0)    // end 입력 시 종료
        {
            break;
        }
        else if (strcmp(str, "list") == 0)  // list를 입력하면 파일의 내용 확인
        {
            fseek(fp, 0, SEEK_SET); // 버퍼의 위치 지시자를 맨 처음으로 이동
            /*
            fseek 함수 원형: int fseek(FILE * stream, long offset, int whence);

            whence에 사용할 수 있는 값과 의미:
            SEEK_SET -> 0, 기준은 파일의 처음, 양수만 가능
            SEEK_CUR -> 1, 기준은 파일의 현재, 양수와 음수 모두 가능
            SEEK_END -> 2, 기준은 파일의 끝, 음수만 가능
            */
            while(1)
            {
                fgets(str, sizeof(str), fp);    // 과일 이름을 읽는다.
                if (feof(fp))                   // 파일의 내용을 모두 읽으면 종료
                {
                    break;
                }
                printf("%s", str);              // 읽은 과일 이름을 화면 출력
            }
        }
        else
        {
            fprintf(fp, "%s\n", str);           // 입력한 과일 이름을 파일에 출력
        }
    }
    fclose(fp);
    
    return 0;
}