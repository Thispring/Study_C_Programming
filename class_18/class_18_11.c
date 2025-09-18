/*
fread와 fwrite 함수:
fread와 fwrite 함수는 입출력할 데이터의 크기와 개수를 인수로 줄 수 있으므로
구조체나 배열과 같이 데이터양이 많은 경우도 파일에 쉽게 입출력할 수 있습니다.
또한 숫자와 문자 사이의 변환 과정을 수행하지 않으므로 입출력 효율을 높일 수 있습니다.
그러나 파일의 내용을 메모장 같은 편집기로 직접 확인할 수는 없습니다.
*/
#include <stdio.h>

int main(void)
{
    FILE *afp, *bfp;
    int num = 10;
    int res;

    afp = fopen("a5.txt", "wt");    // 텍스트 모드로 출력 파일 개방
    fprintf(afp, "%d", num);        // num의 값을 문자로 변환하여 출력
    // a5.txt 데이터 비트열: 
    // 00110001 00110000

    bfp = fopen("b5.txt", "wb");    // 바이너리 모드로 출력 파일 개방
    fwrite(&num, sizeof(num), 1, bfp);  // num의 값을 그대로 파일에 출력
    // b5.txt 데이터 비트열: 
    // 00000000 00000000 00000000 00001010

    fclose(afp);
    fclose(bfp);

    bfp = fopen("b5.txt", "rb");    // 바이너리 모드로 입력 파일 개방
    fread(&res, sizeof(res), 1, bfp);   // 파일의 데이터를 그대로 변수에 입력
    printf("%d", res);              // 입력한 데이터 확인

    fclose(bfp);

    return 0;
}
// fwrite(출력할 데이터의 주소, 크기, 개수, 파일 포인터); <- fwrite 함수 인수
// fread(입력할 데이터의 주소, 크기, 개수, 파일 포인터); <- fread 함수 인수