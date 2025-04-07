#include <stdio.h>

// 6-3 Class Problem #2
int main()
{
    char a[] = "Hello";
    char *p[] = {a, a+1, a+2, a+3, a+4};

    printf("%s %c \n", a, *a);
    printf("%s %c \n", a+1, *(a+1));
    printf("%s %c \n", a+2, *(a+2));
    printf("%s %c \n", a+3, *(a+3));
    printf("%s %c \n", a+4, *(a+4));

    printf("%p %p %s \n", p, *p, *p);
    printf("%s %s %s %s %s \n", *p, *(p+1), *(p+2), *(p+3), *(p+4));

    return 0;
}