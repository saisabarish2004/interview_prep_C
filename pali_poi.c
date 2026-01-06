#include <stdio.h>
int is_pali(char *s);
int is_pali(char *s)
{
    char *l = s;
    char *r = s;

    while(*r != '\0')
        r++;
    r--; 

    while(l < r)
    {
        if(*l != *r)
            return 0;
        l++;
        r--;
    }
    return 1;
}

int main()
{
    // char a[] = "mdam";
    //  int n=is_pali(a);

    //  if (n==1)
    //  {
    //     printf("palli");
    //  }
    //  else if(n==0)
    //  {
    //     printf("not palli");
    //  }
int a[]={10,20,30};
int *p = a;
printf("%d %d", *p, *(p+2));

}