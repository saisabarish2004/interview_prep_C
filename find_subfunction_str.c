#include <stdio.h>
#include <string.h>
char *strstr1(char *s1, char *s2)
{
    char *m1=s1;
    

   while(*m1)
{
    char *temp = m1;
    char *check = s2;

    while(*temp && *check && *temp == *check)
    {
        temp++;
        check++;
    }

    if(*check == '\0') 
        return m1;

    m1++;
}
    
    return NULL ;
}
int main ()
{
    char *s1="hellow world";
    char *s2="low";
char *a=strstr1(s1,s2);
printf("%s",a);
}