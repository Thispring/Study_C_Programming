#include <stdio.h>
#include <string.h>
/*
도전1:
프로필 교환 프로그램
두 명의 나이와 키를 입력한 후에 바꾸어 출력합니다. 단, 나이와 키를 바꾸는 함수는 int형과 double형을 모두 교환할 수 있도록
하나의 함수로 구현하세요. 다음의 swap 함수 호출 예를 참고하여 작성합니다.

swap("int", &a, &b);    // int형 변수 a, b의 값을 바꿀 때
swap("double", &a, &b); // double형 변수 a, b의 값을 바꿀 때
*/

// type으로 자료형을 문자열로 넘겨주고, void 포인터를 사용해 형변환하여, int와 double형을 모두 교환
void swap(char *type, void **pa, void **pb);

int main()
{
    int age1, age2;
    double height1, height2;
    void *pa, *pb;

    printf("사람1 나이 입력:\n");
    scanf("%d", &age1);
    printf("사람1 키 입력:\n");
    scanf("%lf", &height1);

    printf("사람2 나이 입력:\n");
    scanf("%d", &age2);
    printf("사람2 키 입력:\n");
    scanf("%lf", &height2);

    printf("교환 전 나이와 키: \n");
    printf("사람1 나이: %d, 키: %lf\n", age1, height1);
    printf("사람2 나이: %d, 키: %lf\n", age2, height2);
    
    // void 포인터에 int형 변수의 주소 연결
    pa = &age1;
    pb = &age2;
    swap("int", &*pa, &*pb);
    // void 포인터에 double형 변수의 주소 연결
    pa = &height1;
    pb = &height2;
    swap("double", &*pa, &*pb);

    return 0;
}

void swap(char *type, void **pa, void **pb)
{
    int pi;        // int형에 사용할 교환 포인터 변수
    double pd;     // double형에 사용할 교환 포인터 변수

    // strcmp를 사용해서, 매개변수로 받은 type이 int와 같다면
    // void 포인터를 int로 형변환 하여 사용
    if (strcmp(type, "int") == 0)   // 0이 나오면 같은 문자열
    {
        pi = *(int*)pa;
        *(int*)pa = *(int*)pb;
        *(int*)pb = pi;
        printf("나이 교환: \n");
        printf("사람1 나이: %d, 사람2 나이: %d\n", *(int*)pa, *(int*)pb);
    }
    else if (strcmp(type, "double") == 0)
    {
        pd = *(double*)pa;
        *(double*)pa = *(double*)pb;
        *(double*)pb = pd;
        printf("키 교환: \n");
        printf("사람1 키: %lf, 사람2 키: %lf\n", *(double*)pa, *(double*)pb);
    }  
}
