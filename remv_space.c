#include <stdio.h>
int rev(char*s)
{
   char *r=s;
   char *w=s;
    while(*r)
    {
        if(*r!=' ')
        {
            *w++=*r;
            
        }
      *r++;
    }
      *w='\0';
}

int main()
{
    char a[] = "s a i sab";
    rev(a);
    printf("%s", a);
}