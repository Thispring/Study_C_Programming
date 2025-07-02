#include <stdio.h>

/*
도전1:
가로 세로의 합 구하기

5행 6열의 2차원 배열을 선언하고 4행 5열 부분은 1부터 20까지 초기화합니다. 초기화된 배열에서
마지막 열의 요소에는 각 행의 합을 저장하고 마지막 행의 요소에는 각 열의 합을 저장한 후 전체 배열의 값을 출력하세요.
*/
// 변수 이름 역할에 맞게 짓기
int main()
{
    int ary[5][6] = {
        0,
    };
    int count = 1; // 4열 * 5행 1-20 초기화를 위한 변수
    int total_sum = 0;   // 전체 합 저장을 위한 변수

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            ary[i][j] = count;      // 1-20 숫자 저장
            total_sum += count;     // 전체 합 누적으로 계산
            count++;
        }
    }
    ary[4][5] = total_sum;          // 전체 합 저장

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            ary[i][5] += ary[i][j];     // 각 행의 합 저장
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            ary[4][j] += ary[i][j];     // 각 열의 합 저장
        }
    }   

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", ary[i][j]);   // 출력
        }
        printf("\n");
    }   

    return 0;
}
/*
int main()
{
    int ary[5][6] = {
        0,
    };
    int count = 1; // for문 배열에 값을 넣기위한 변수
    int temp = 0;   // 행의 덧샘 값을 저장할 변수
    int temp2 = 1;  // 열의 합
    int temp3 = 0;  // 각 열의 합

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 5 && i + j >= 5 && i + j <= 8)
            {
                ary[i][j] = temp;
                count++;
            }
            else if (i == 4 && i + j != 9)  // 마지막 행의 요소는 제외
            {
                ary[i][j] = temp2 - count;  // count 값을 빼야 합이 맞음
                temp2 += i; // 열의 합 마다 차이가 4이므로 +4
                temp3 += temp2 - count; // 열의 합을 temp3에 저장
            }
            else if (i + j == 9)    // 마지막 행의 요소
            {
                ary[i][j] = temp3 - count + 1;
            }
            else    // 4행 5열 부분은 1부터 20으로 초기화
            {
                temp += count;  // 행의 합을 위해 count를 temp에 대입
                ary[i][j] = count;  
                count++;    // 다음 열에 +1한 값을 위해 count++
            }
        }
        temp = 0;   // i 값이 바뀔 때 마다 temp 초기화
        count--;    // i 값을 사용해 배열에 숫자를 넣으므로, i가 증가할때 -1을 하여, 순서대로 값을 대입
        temp2 += count; // 열의 합을 구하기 위해 i가 바뀔 때만 count를 temp2에 대입
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d", ary[i][j]);
        }
        printf("\n");
    }   

    return 0;
}
*/