#include <stdio.h>

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertion_sort(int a[], int n)
{
    if (n > 1)
    {
        for (int i = 1; i < n; i++)
        {
            int curr = a[i];
            int j = i - 1;
            for (;j >= 0; j--)
            {
                if (curr < a[j])
                {
                    a[j+1] = a[j];
                }
                else
                {
                    break;
                }
            }
            a[j+1] = curr;
            print(a,n);
        }
    }
}

void insertion_sort2(int a[], int n)
{
    if (n > 1)
    {
        for (int i = 1; i < n; i++)
        {
            int curr = a[i];
            int j = i - 1;
            while (j>=0 && a[j] > curr)
            {
                a[j+1] = a[j];
                j--;
            }
            
            a[j+1] = curr;
            print(a,n);
        }
    }
}

int main()
{
    int a[10] = {10, 8, 11, 7, 4, 12, 9, 6, 5, 3};
    insertion_sort2(a,10);

    return 0;
}