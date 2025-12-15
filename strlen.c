#include <stdio.h>
int my_strlen(char*a);

int my_strlen(char*a)
{
    int n=0,i=0;
    while(a[n+i]!='\0')
{
    i++;
}
return i;
}
int main()
 {
    char a[]="saisaisai";
     char b[]="siisiisai";
    
    int len=my_strlen(a);
        printf("%d",len);
    

 }