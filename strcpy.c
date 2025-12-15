#include<stdio.h>

void my_strcpy(char *dest, char *src);

void my_strcpy(char *dest, char *src)

{
      int j=0;
    while(src[j]!='\0')
    {
      
    dest[j]=src[j];
        j++;

    }
    dest[j]='\0';
}

int main()
 {
    char a[]="saisaisai";
    char b[20];
 my_strcpy(b,a);
        printf("%s",b);
    

 }