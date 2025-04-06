#include <stdio.h>

// 6-3 Class Problem #1
int main()
{
    char * s1 = "Eagles";
    char * s2 = s1;
    char s3[] = "Twins";
    char *s4 = s3;

    s1 = "Lions";
    s2 = "Tigers";
    //s3 = "Giants";
    s4 = "Randers";

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    printf("%s\n", s4);

    s1[0] = 'A';
    s2[0] = 'B';
    s3[0] = 'C';
    s4[0] = 'D';
    
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    printf("%s\n", s4);
    return 0;
}