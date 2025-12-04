#include <stdio.h>
#include <limits.h>
int second_largest(int *a, int n);

int main()
{
    int a[] = {1,7,7,7,7};
    int n = sizeof(a) / sizeof(a[0]);
int b=second_largest(a, n);

printf(" sec large=%d",b);
return 0;

}
int second_largest(int *a, int n)
{
    int large= INT_MIN;
    int sec= INT_MIN;

    for (int i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            sec=large;
            large=a[i];

        }
        else if (a[i]>sec&&a[i]!=large)
         
            {
                sec=a[i];
            }
          
        
    }
 return sec;
}