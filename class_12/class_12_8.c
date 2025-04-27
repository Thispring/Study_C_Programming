#include <stdio.h>

/*
문자열만 출력을 하게 된다면,
문자열 전용 출력 함수인 puts와 fputs를 사용할 수 있습니다.
단, puts 함수는 fputs 함수와 달리 문자열을 출력한 후에 자동으로 줄을 바꿔주는 특징이 있습니다.
*/
int main()
{
    char str[80] = "apple juice";
    char *ps = "banana";

    puts(str);  // apple juice 출력하고 줄 바꿈
    fputs(ps, stdout);  // banana만 출력
    puts("milk");   // banana에 이어 milk 출력

    return 0;
}