#include <stdio.h>

void reverse(int *a, int n)
{
    int *left = a;
    int *right = a + (n - 1);
    int temp;

    while(left < right)
    {
        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main()
{
    int a[] = {10, 20, 30, 40,50,60};
    int n = sizeof(a) / sizeof(a[0]);
 for(int i = 0; i < n; i++)
        printf("%d \n", a[i]);
  printf("%d\n ", a[3]);   
    reverse(a, n);

    for(int i = 0; i < n; i++)
        printf("%d \n", a[i]);

    printf("%d \n", a[3]);
}
