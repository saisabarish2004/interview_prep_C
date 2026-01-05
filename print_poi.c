#include<stdio.h>
int main()
{
char *names[3] = {"sai","ram","raj"};
char **p = names;
int n=0;
while(n<3)
{
    printf("%s",*(p+n));
    n++;
}

// for(int i=0;i<3;i++)
// {
//     char *q=*(p+i);

//     while(*q !='\0')
//     {
//         printf("%c\t",*q);
//     *q++;
//     }
//     printf("\n");
// }
}