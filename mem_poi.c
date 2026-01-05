#include <stdio.h>

int main()
{
    int a = 5;
    int b = 15;

    int *p = &a;
    int *q = &b;
    int **pp = &p;

    int *pp = 20;
    p = &a;
    **pp = 25;

    printf("a=%d b=%d\n", a, b);
    return 0;
}
