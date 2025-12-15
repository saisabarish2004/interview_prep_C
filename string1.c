#include <stdio.h>
#include<string.h>
 int swap(char *a,int n);

 int swap(char *a, int n)
 {
char *left=a;
char *right=a+ (n-1);
char temp=0;
    while(left<right)
    {
        temp=*left;
        *left=*right;
        *right=temp;

        left++;
        right--;

    }
 }
 int main()
 {
    char a[]="sai";
    int n=strlen(a);

    swap(a,n);
    
        printf("%s",a);
    

 }