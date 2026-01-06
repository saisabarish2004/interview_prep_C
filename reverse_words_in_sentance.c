#include<stdio.h>
void reverse_words(char *s);
void rev(char *start,char *end);
void reverse_words(char *s)
{
    char *start=s;
    char *end;

    while(*start)
    {
        end=start;
        while(*end!=' ' && *end!='\0')
        {
            end++;
        }
        rev(start,end-1);
    start=end+1;
    }
    
}
void rev(char *start,char *end)
{
    char temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
}

int main()
{
    char s[]="my name is sai";
      reverse_words(s);
    printf("%s",s);
}