// 전역 변수에 extern과 static을 사용해 양수 입력을 받고, 입력된 양수의 개수와 합, 평균을 구하는 프로그램
// average 함수 정의
// 입력한 양수의 평균을 구해 반환합니다.
extern int count;   // 전역 변수 count 공유
extern int total;   // 전역 변수 total 공유

double average(void)
{
    return total / (double)count;   // 입력값의 평균 반환
}