#include <stdio.h>

int main()
{
    int n = 5;

    // 1-qism: Yuqoriga piramida
    for (int i = 1; i <= n; i++)
    {
        // Bo'sh joylar
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        // Yulduzlar
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 2-qism: Teskari piramida (eng yuqori qatorni o'tkazib yuboramiz)
    for (int i = n - 1; i >= 1; i--)
    {
        // Bo'sh joylar
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        // Yulduzlar
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}