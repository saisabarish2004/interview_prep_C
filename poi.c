#include<stdio.h>

void fun(int *a);  // <<< correct signature
int i=0;
int main()
{
    int arr[3] = {10,20,30};
    for(int j=0;j<=5;j++)
    {
    fun(arr);
    }
}

void fun(int *a)
{
i++;
    printf("%d\n", a[i]); // 20, because a points to arr[0]
    
}
