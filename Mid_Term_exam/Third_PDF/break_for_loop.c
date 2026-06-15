#include <stdio.h>

void main()
{

    // // Mashq 5.1:
    // // 1 dan 50 gacha sonlarni chop eting. Lekin 25 ga yetganda break yordamida to‘xtating.

    // for (int i = 1; i <= 50; i++)
    // {
    //     if (i == 25)
    //     {
    //         break;
    //     }
    //     printf("%d\n", i);
    // }

    // // Mashq 5.2:
    // // 1 dan 20 gacha sonlarni chop eting, lekin 3 ga bo‘linadigan sonlarni continue yordamida o‘tkazib yuboring.

    // for (int i = 1; i <= 20; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         continue;
    //     }

    //     printf("%d\n", i);
    // }

    // Mashq 5.3:
    // Foydalanuvchidan sonlar qabul qiling. 0 kiritilganda dastur to‘xtasin (while + break bilan).

    int n;

    int i = 1;

    while (i)
    {
        printf("Please enter a number: ");
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
    }
}