#include<stdio.h>

int add(int a,int b);
int mul(int a,int b);
int sub(int a,int b);
int add(int a,int b)
{
    return a+b;

}
int mul(int a,int b)
{
return a*b;
}
int sub(int a,int b)
{
return a-b;
}
int main()
{
   
    //int (*fp)(int,int);
// fp=add;
//     printf("%d\n",fp(4,6));
//     fp=mul;
//  printf("%d\n",fp(4,6));

int (*fp [3])(int,int)={add,mul},sub};

int choise=0;
scanf("%d",&choise);

printf("result=%d",fp[choise-1](4,6));


}