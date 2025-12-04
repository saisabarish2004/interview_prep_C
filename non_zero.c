#include <stdio.h>

int moving(int *a, int n);

int main()
{
    int a[] = {1,0,7,0,7};
    int n = sizeof(a) / sizeof(a[0]);
    moving(a,n);
 for(int i = 0; i < n; i++)
        printf("%d \n", a[i]);
return 0;

}
int moving(int *a,int n)
{
   int *p = a;          // scanning pointer (like i)
int *end = a + n;    // stop when p reaches here
int *write = a;      // where next non-zero should go (like pos)


 for(p = a; p < end; p++)
{
    if(*p != 0)
    {
        *write = *p;
        write++;
    }
}
while(write < end)
{
    *write = 0;
    write++;
}

}