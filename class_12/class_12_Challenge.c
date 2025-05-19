#include <stdio.h>
#include <string.h>

/*
단어 정렬 프로그램
키보드로 세 단어를 입력하여 사전 순서대로 출력합니다.
*/
void my_strcmp(char *pa, char *pb, char *pc);

int main()
{
    char str1[80];
    char str2[80];
    char str3[80];

    printf("세 단어 입력: ");
    scanf("%s%s%s", str1, str2, str3);

    my_strcmp(str1, str2, str3);
    return 0;
}

void my_strcmp(char *pa, char *pb, char *pc)
{
    int i = 0;  // 문자열 출력을 위한 카운팅 변수, 카운팅한만큼 -하여 전체 문자열 출력
    while ((*pa != '\0' || *pb != '\0' || *pc != '\0')) // 세 문자가 같으나 널 문자가 아닌 경우
    {
        // 사전 순서는 아스키 코드가 낮은 값이 앞으로, 높은 값이 뒤로 가야 순서대로 정렬 가능
        if (*pa < *pb && *pa < *pc) // str1(pa)이 사전 순서가 먼저일 때
        {
            if (*pb < *pc) // 나머지 비교 후 출력
            {
                printf("%s %s %s", pa-i, pb-i, pc-i);
                break;
            }
            else
            {
                printf("%s %s %s", pa-i, pc-i, pb-i);
                break;
            }
        }
        else if (*pb < *pa && *pb < *pc) // str2(pb)이 사전 순서가 먼저일 때
        {
            if (*pa < *pc) // 나머지 비교 후 출력
            {
                printf("%s %s %s", pb-i, pa-i, pc-i);
                break;
            }
            else
            {
                printf("%s %s %s", pb-i, pc-i, pa-i);
                break;
            }
        }
        else if (*pc < *pa && *pc < *pb) // str3(pc)이 사전 순서가 먼저일 때
        {
            if (*pa < *pb) // 나머지 비교 후 출력
            {
                printf("%s %s %s", pc-i, pa-i, pb-i);
                break;
            }
            else
            {
                printf("%s %s %s", pc-i, pb-i, pa-i);
                break;
            }
        }
        else // 위의 조건을 모두 만족하지 못했을 경우 같은 단어로 간주
        {
            printf("%s %s %s", pa-i, pb-i, pc-i);
            break;
        }

        pa++; // 다음 문자로 이동
        pb++; // 다음 문자로 이동
        pc++; // 다음 문자로 이동
        i++;    // 다음 문자 이동 카운팅
    }
}