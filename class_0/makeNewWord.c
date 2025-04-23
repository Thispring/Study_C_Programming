#include <stdio.h>
#include <string.h>

/*
주어진 문자열에 있는 알파벳 조합으로 새로운 단어를 만드는 프로그램을 작성해보세요.
첫 번째 줄에는 입력으로 문자열이 주어집니다. 두 번째 줄에는 입력으로 문자열(단어)이 주어집니다.
첫 번째 입력으로 받은 문자열에 있는 알파벳 조합을 분석하여 두 번째 입력으로 받은 문자열을 구성하도록 합니다.
두 번째 문자열을 구성하는 알파벳이 첫 번째 문자열에 존재하더라도, 해당 알파벳 갯수가 부족하다면 구성이 불가능 한 것으로 간주합니다.
ex)apple aaa -> NO
*/
int main()
{
    char a[10];
    char b[10];

    int arr_A[25] = {0 ,};  // char a의 알파벳 구성요소를 저장 하기위한 int 배열
    int arr_B[25] = {0, };  // char b의 알파벳 구성요소를 저장 하기위한 int 배열

    int a_count = 0;    // arr_A 주소값에 접근하기 위한 int 변수
    int b_count = 0;    // arr_B 주소값에 접근하기 위한 int 변수

    int count = 0;  // a, b의 알파벳 개수 비교를 위한 변수

    printf("첫 번째 문자열 입력: \n");
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++) // 입력받은 char a 배열 크기까지 반복
    {
        if (a[i] >= 97 && a[i] <= 122) // a[i]의 값이 97~122 사이라면
        {
            /*
            a[i]의 값에서 97을 뺀 값(97~122의 개수를 0~25로 만들어서 배열에 저장하기위해 뺄샘)을
            배열자리 값에 활용하기 위해 a_count에 저장
            */
            a_count = a[i] - 97;    
            // int형 배열에 +1을 하여, 해당 문자의 개수 카운트
            arr_A[a_count] += 1;
        }
    }

    printf("두 번째 문자열 입력: \n");
    scanf("%s", b);
    // char a의 알파벳 계산과 동일하게 진행
    for (int i = 0; i < strlen(b); i++)
    {
        if (b[i] >= 97 && b[i] <= 122)
        {
            b_count = b[i] - 97;
            arr_B[b_count] += 1;
        }
    }

    // int 배열인 arr_A, B를 모두 검사하기 위한 반복문
    for (int i = 0; i < 25; i++)
    {
        // arr_B[i]가 크다면 a에 입력받은 알파벳이 부족한 상황이므로 count에 숫자를 더해, 조건 만족여부 판단
        if (arr_A[i] < arr_B[i])    
        {
            count++;
        }
    }

    // count가 0이 아니어야지 조건 만족
    if (count > 0)  
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
        
    return 0;
}