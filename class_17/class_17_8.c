/*
구조체 배열을 처리하는 함수:
함수에서 -> 연산자를 사용하여 구조체 배열의 값 출력
*/
#include <stdio.h>

struct address  // 주소록을 만들 구조체 선언
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct address *lp);

int main(void)
{
    struct address list[5] = {              // 요소가 5개인 구조체 배열 선언 및 초기화
        {"홍길동", 23, "111-1111", "울릉도 독도"},
        {"이순신", 35, "222-2222", "서울 건천동"},
        {"장보고", 19, "333-3333", "완도 청해진"},
        {"유관순", 15, "444-4444", "충남 천안"},
        {"안중근", 45, "555-5555", "황해도 해주"}
        
    };

    print_list(list);   // 구조체 변수 이름을 함수의 매개변수로 전달
    
    return 0;
}

void print_list(struct address *lp) // 매개변수로 구조체 포인터 설정
{
    for (int i = 0; i < 5; i++)
    {
        printf("%10s%5d%15s%20s\n",
            (lp+i)->name, (lp+i)->age, (lp+i)->tel, (lp+i)->addr);
    }
}