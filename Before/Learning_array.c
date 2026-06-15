#include<stdio.h>

int main()
{
    int a[7] = {3, 14, 15, 18, 22, 35};
    int b = 7, i = 0, j = 0;
    scanf("%d", &b);

    for (i = 0; i < 6; i++)
    {
        if (b < a[i])
        {
            break;
        }
    }

    for (j = 6; j > i; j--)
    {
        a[j] = a[j - 1];
    }

    a[j] = b;

    for (i = 0; i < 7; i++)
    {
        printf("a[%d]-=-%d\n", i, a[i]);
    }
}