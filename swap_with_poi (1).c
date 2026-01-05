#include<stdio.h>

void swap(int *a, int *b);
void swap(int *a, int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int s=2;
    int h=3;
swap(s,h);
printf("s=%d,h=%d",s,h);

}