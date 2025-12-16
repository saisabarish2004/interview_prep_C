#include<stdio.h>

void removeDuplicates(char *s);
void removeDuplicates(char *s)
{
  int i=0;
  while(s[i]!='\0')
  {
    int j=0;
    while(i>j)
    {
      if(s[i]==s[j])
      {
        int k=i;
        while(s[k]!='\0')
        {
            s[k]=s[k+1];
            k++;
        }
      }
      j++;
    }
    if(i==j)
    {
        i++;
    }
  }
}

int main()
{
    char s[]="sabarish";
 removeDuplicates(s);
 printf("%s",s);
}