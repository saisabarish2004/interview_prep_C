#include <stdio.h>

void rem_dup(char *s)
{
    char *read = s;
    char *write = s;

    while(*read)
    {
        char *check = s;
        int found = 0;

        while(check < write)
        {
            if(*check == *read) { found = 1; }
            check++;
        }

        if(!found)
        {
            *write = *read;
            write++;
        }

        read++;
    }

    *write = '\0';
}
int main()
{
    char a[] = "saisab";
     rem_dup(a);
    printf("%s", a);
}