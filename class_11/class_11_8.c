#include <stdio.h>

/*
입력 버퍼 지우기
scanf와 getchar함수는 같은 버퍼를 공유하기에, 버퍼에 남겨둔 데이터로 인해 수행되는 함수가 잘못 가져갈 가능성이 있습니다.
따라서 버퍼에 남아 있는 불필요한 데이터는 미리 제거하는 것이 좋습니다.
입력 버퍼의 내용을 지우는 방법은, 버퍼에 남아 있는 문자들을 모두 입력해서 사용하지 않고 버릴 수 있습니다.
*/
int main()
{
    int num, grade; // 학번과 학점을 저장할 변수

    printf("학번 입력: ");
    scanf("%d", &num);  // 학번 입력, scanf 입력으로 남아있는 개행문자가 grade에 저장 될 수 있으므로, 아래 getchar에서 개행 문자를 제거
    getchar();  // 버퍼에 남아 있는 개행 문자 제거
    printf("학점 입력: ");
    grade = getchar();  // 학점 입력
    printf("학번: %d, 학점: %c", num, grade);

    return 0;
}