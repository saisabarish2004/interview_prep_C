
#include <stdio.h>
char first_non_repeat(char *s)
{
  char *read=s;
  
  
  while(*read!='\0')
  {

    char *check=s;
int count=0;
    while(*check!='\0')
    {
        
        if(*check==*read)
        {
            count++;
          
        }
       
        check++;
    }
     if(count==1)
    {
       return *read;
       
    }
     read++;
    
  }
  return '#';
}
 

void main()
{
    char s[]="aacabbec";
   char ret= first_non_repeat(s);

   printf("%c",ret);
}
