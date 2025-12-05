
#include <stdio.h>

void moveNegativesFront(int *a, int n);
int main()
{
    int a[] = {3, -1, 4, -5, 9, -2, 7};
    int n = sizeof(a) / sizeof(a[0]);
moveNegativesFront(a, n);
   for(int i = 0; i < n; i++)
        printf("%d \n", a[i]);

}


void moveNegativesFront(int *a, int n)
{
    int negEnd = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            int temp = a[i];

            for(int j = i; j > negEnd; j--)
            {
                a[j] = a[j - 1];
            }

            a[negEnd] = temp;
            negEnd++;
        }
    }
}

