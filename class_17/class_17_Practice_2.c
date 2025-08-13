#include <stdio.h>

/*
확인문제2:
크래커의 가격(price)과 열량(calories)을 저장할 cracker 구조체를 선언합니다.
만든 구조체로 변수를 선언하고 가격과 열량을 키보드로 입력한 후에 화면으로 출력하는 프로그램을 작성하세요.
*/
struct cracker
{
    int price;
    int calories;
};

void InputInfo(struct cracker ck);

int main(void)
{
    struct cracker ck;
    InputInfo(ck);

    return 0;
}

void InputInfo(struct cracker ck)
{
    // NOTE: scanf 문법 확인 필수
    // 동적할당으로 입력 공간 확보
    printf("바사삭의 가격과 열량을 입력하세요: \n");
    scanf("%d%d", &ck.price, &ck.calories);

    printf("바사삭의 가격: %d\n", ck.price);
    printf("바사삭의 열량: %d\n", ck.calories);
}
