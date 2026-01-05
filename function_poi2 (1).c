#include<stdio.h>
void operate(int(*cb)(),int a, int b);
int add(int a,int b);
int mul(int a,int b);
int sub(int a,int b);
int res=0;
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

void operate(int(*cb)(),int a, int b)
{
  res= cb(a,b);

}
int main()
{
     operate(add,4,5);
     printf("add=%d\n",res);
      operate(sub,4,5);
     printf("sub=%d\n",res);
      operate(mul,4,5);
     printf("mull=%d\n",res);
}
