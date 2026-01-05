
#include<stdio.h>

int my_strlen(char*a);
int pali(char* a);
int my_strlen(char*a)
{
    int n=0,i=0;
    while(a[n+i]!='\0')
{
    i++;
}
return i;
}

int pali(char* a)
{
    int n=my_strlen(a);
int i=0;

    while( a[i]==a[n-1]&&a[i]!='\0')
    {
        i++;
        n--;
return 1;
    }
    return 0;
}
 int main()
 {
    char a[]="hello";
int j=pali(a);
if (j==1)
{
    printf("madam is pali");
}
else{
    printf("madam is not pali");
}
 }