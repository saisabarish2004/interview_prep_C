#include<stdio.h>
int is_anagram(char *s1, char *s2)
{
    char *read = s1;

    while(*read)
    {
        char *check=s2;
        int found=0;
        while(*check)
        {

            if(*read==*check)
            {
                *check='*';
                found=1;
                break;
            }
             check++;  
        }
    if(!found)
    {
                return 0;
    }
         
        
     read++;
    }
    return 1;
}   

int main()
{
    char s1[]="listetnnn";
    char s2[]="silenttt";

    int a=is_anagram(s1,s2);

    if(a==1)
    {
        printf("anagram");
    }
    else{
         printf(" not anagram");
    }
}