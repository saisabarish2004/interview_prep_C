#include <stdio.h>

void change_ptr(int **pp)
{
    static int x = 100;
    *pp = &x; 
    printf("pp points to value: %d\n", *pp);
    printf("pp points to value: %p\n", pp);
}
int main()
{
    int a = 10;
    int *p = &a;

    change_ptr(&p);

    printf("p points to value: %d\n", *p);
    printf("p points to value: %p\n", p);
    printf("p points to value: %p\n", &a);

    return 0;
}
