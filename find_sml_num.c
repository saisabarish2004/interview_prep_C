#include<stdio.h>
int find(int *a,int n);
void swap(int *a,int i,int temp);
 int missing =0;
int main()
{
    int a[] = {5,2,4,5,7};
    int n = sizeof(a) / sizeof(a[0]);
int miss = find(a,n);
printf("missing num =%d",miss);
}
int find(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        while(a[i] > 0 && a[i] <= n && a[i] != a[a[i] - 1])
        {
            swap(a, i, a[i] - 1);
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] != i + 1)
        {
            return i + 1;
        }
    }

    return n + 1;
}

void swap(int *a, int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
