#include <stdio.h>
void rev(char *start,char *end);
void rev_sentance(char*s);
void rev(char *start,char *end)
{
    while(start<end){
    char temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
    }
}
void rev_sentance(char*s)
{
    char *start=s;
char *end_sen=s;
 char *end_word;
 while(*start == ' ')   
 {
            start++;
if(*start == '\0')

 break;
}
while(*end_sen !='\0')
{
    end_sen++;
}
rev(start,end_sen-1);
while(*start)
{
   end_word=start;
    while(*end_word !='\0'&&*end_word !=' ')
    {
        end_word++;
    }
rev(start,end_word-1);
start=end_word+1;
}
}
int main()
{
    char s[]="my name is sai";
     rev_sentance(s);
    printf("%s",s);
}