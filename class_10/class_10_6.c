#include <stdio.h>

// 6-1 Class Problem
int a[] = {0, 1, 2, 3, 4};
int main()
{   
    int i, *p;
    
    for (i = 0; i <= 4; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    for (p = &a[0]; p <= &a[4]; p++)
    {
        printf("%5d", *p);
    }
    printf("\n");
    for (p = &a[0], i = 1; i <= 5; i++)
    {
        printf("%5d", p[i]);
    }

    return 0;
}