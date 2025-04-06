#include <stdio.h>

int main()
{
    char a[] = "Hello";
    char *p[] = {a, a+1, a+2, a+3, a+4};

    printf("%s %c \n", a, *a);

}