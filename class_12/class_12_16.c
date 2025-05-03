#include <stdio.h>
#include <string.h>

/*
strcmp, strncmp 함수는 아스키 코드 값을 이용해 알파벳 순서를 비교하여 그 결과를 반환합니다.
아스키 코드 값은 알파벳 순서에 따라 커지는 것을 통해, 더 작은 값이 '사전 순서'가 먼저 나오는 것으로 반환합니다.
*'사전 순서': 사전에 단어가 수록되는 알파벳 순서

strcmp(str1, str2)에서 str1이 str2보다 사전에 나중에 나오면 -1을 반환하고, 
str1이 str2보다 먼저 나오면 1을 반환, 같은 문자열이라면 0을 반환 합니다. 

단, 아스키 코드 값으로 비교하기에, 함수의 반환값이 항상 사전 순서를 의미하는 것은 아닙니다.
ex)"apple"과 "Banana"는 사전 순서상 apple이 먼저지만, Banana의 B의 아스키 코드 값이 더 작기에
1을 반환합니다. 이러한 아스키 코드 특징을 유의하여 대소문자 일치를 해야합니다.
*/
int main()
{
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("사전에 나중에 나오는 과일 이름: ");
    if (strcmp(str1, str2) > 0) // str1이 str2보다 크면(사전에 나중에 나오면)
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("%s\n", str2);
    }

    printf("앞에서 3개의 문자만 비교: ");
    if (strncmp(str1, str2, 3) == 0) // strncmp는 문자 수를 인수로 지정해, 앞에서 지정한 인수만큼만 비교합니다.
    {
        printf("같다.\n");
    }
    else
    {
        printf("다르다.\n");
    }
    return 0;
}