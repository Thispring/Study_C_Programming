#include <stdio.h>

/*
문자열이 주어지면, 해당 문자열에서 공백을 제거한 문자열을 출력하는 프로그램을 작성하세요.
출력 끝에는 개행이 포함됩니다.
주어진 문자열 str이 아래와 같은 문자열이라면, "I love C Programming" str에서 공백을 제거한 문자열은 "loveCProgramming" 입니다.
*/
int main()
{
    char str[100];
    int space = 0;  // 공백에 대한 변수
    printf("문자열 입력:");
    fgets(str, sizeof(str), stdin); // 공백을 포함 할 수 있는 gets함수 사용, 보안상 이유로 fgets로 대신 사용 fgets(배열명, 배열의 전체 크기, stdin으로 확장사용)
    for(int i=0; i < sizeof(str); i++)
    {
        if(str[i] == ' ')   // 다음 행에서 공백을 찾았을 때
        {
            for(int j = i; j < sizeof(str); j++)    // j에 i값을 주어 이전 공백 중복으로 찾는 상황 방지
            {
                if(str[j] != ' ')   // 공백이 나오지 않은 배열을 찾아서
                {
                    str[i] = str[j];    // 공백인 [i]배열에 [j]대입
                    str[j] = ' ';  // j 주소에 공백을 주어 다음 문자열이 오게 만듬
                    break;  // break를 통해 빠져나오기
                }   
            }
        }
        else if (str[i] == sizeof(str)) // str의 끝부분에 개행문자를 주고 종료
        {
            str[i] = '\n';
        }
    }
    puts(str);

    return 0;
}