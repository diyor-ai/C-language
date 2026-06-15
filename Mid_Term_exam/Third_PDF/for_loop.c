#include <stdio.h>

void main()
{

    // Mashq 4.1 (Oddiy):
    // for loop yordamida 1 dan 20 gacha bo‘lgan toq sonlarni chop eting.

    // for (int i = 1; i <= 20; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // Mashq 4.2 (Yig‘indi):
    // Foydalanuvchidan N oling va 1 dan N gacha bo‘lgan sonlar yig‘indisini for bilan hisoblang.

    // int N;
    // printf("Please enter a number: ");
    // scanf("%d", &N);

    // int sum = 0;

    // for (int i = 1; i <= N; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("From %d to 1 all numbers sum is %d\n", N, sum);

    // Mashq 4.3:
    // for loop yordamida quyidagi naqshni chiqaring (bitta loop yetarli):

    char stars[6] = ""; // maksimal 5 yulduz + '\0'
    for (int i = 0; i < 5; i++)
    {
        stars[i] = '*';      // har qadamda bitta yulduz qo‘shiladi
        stars[i + 1] = '\0'; // string tugashini belgilash
        printf("%s\n", stars);
    }

    // for(;;) bu loop bo'lib eng ko'p xolatda ishlatiladi c languageda. U JUDA QULAY VA CODE UCHUN IHCHAM KO'RINADI.
}