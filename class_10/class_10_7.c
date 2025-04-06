#include <stdio.h>

// 6-2 Class Problem #1, #2
int main()
{
    char arr[] = {10, 20, 30};
    char *p = arr;
    char *q = p + 1;

    printf("%p\n", p);
    printf("%p\n", q-1);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]+1);
    printf("%d\n", *(q-1));
    printf("%d\n", p[1]);
    printf("%d\n", arr[1]);
    printf("%d\n", *(arr+1));

    int arr2[] = {10, 20, 30};
    int *p2 = arr2;
    int *q2 = p2 + 1;

    printf("%p\n", p2);
    printf("%p\n", q2-1);
    printf("%p\n", arr2);
    printf("%p\n", &arr2[0]+1);
    printf("%d\n", *(q2-1));
    printf("%d\n", p2[1]);
    printf("%d\n", arr2[1]);
    printf("%d\n", *(arr2+1));

    return 0;
}