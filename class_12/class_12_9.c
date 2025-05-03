#include <stdio.h>
#include <string.h> // strcpy가 들어있는 헤더 파일

/*
컴퓨터에서 숫자 1+2 = 3의 연산은 가능하지만, "apple"+"pie"="apple pie"의 연산은 불가능하다.
컴퓨터에서 문자열 데이터는 문자열의 주소값이기 때문에, 문자열끼리의 연산은 주소값끼리의 연산이 되기에, 원하는 연산이 불가능합니다.
그렇기에 "apple"+"pie"="apple pie" 처럼 문자열끼리 합치거나, 문자열을 변경하려면 해당 char형 배열에 직접 원하는 문자를 대입하는 방법이 있습니다.

하지만, 배열에 하나씩 옮겨야 하기 때문에, c언어에서는 해당 작업을 한 번에 해주는 다양한 문자열 연산 함수가 존재합니다.

strcpy는 문자열을 대입하는 함수로 strcpy(복사 받을 주소, 복사할 내용)으로 사용 가능합니다.
*/
int main()
{
    char str1[20] = "strawberry";
    char str2[20] = "apple";
    char *ps1 = "banana";   // 포인터 변수에 문자열 상수 연결
    char *ps2 = str2;   // 포인터 변수에 배열 연결

    printf("최초 문자열: %s\n", str1);
    strcpy(str1, str2); // str1에 str2배열 문자열 복사
    printf("바뀐 문자열: %s\n", str1);

    strcpy(str1, ps1);  // 복사할 대상에 포인터 변수도 사용이 가능하다
    printf("바뀐 문자열: %s\n", str1);

    strcpy(str1, ps2);  // 복사할 대상에 배열을 연결한 포인터 변수도 사용이 가능하다
    printf("바뀐 문자열: %s\n", str1);

    strcpy(str1, "banana"); // 복사할 대상에 문자열 상수 사용
    printf("바뀐 문자열: %s\n", str1);

    /*
    strcpy 주의점
    1. 첫 번째 인수는 char 배열이나 배열명을 저장한 포인터만 사용할 수 있습니다.
    2. 두 번째 인수는 문자열의 시작 위치를 알 수 있다면 어떤 것이든 사용할 수 있습니다.
    strcpy("banana", "apple");  // 문자열 상수인 "banana"를 바꿀 수 없다.
    strcpy(ps1, "apple");   // ps1에 연결된 문자열 상수 "banana"를 바꿀 수 없다.
    */
    return 0;
}