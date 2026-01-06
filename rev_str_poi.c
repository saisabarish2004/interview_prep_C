#include<stdio.h>

void str_reverse(char *s)
{
    char *l = s;
    char *r = s;

    while(*r!='\0')
    {
     
        r++;

    }
    r--;
    while(l<r)
    {
        int temp=*l;
        *l=*r;
        *r=temp;
        l++;
        r--;
    }


}

int main()
{
    char a[] = "saisabarish";
    str_reverse(a);
    printf("%s", a);
}
