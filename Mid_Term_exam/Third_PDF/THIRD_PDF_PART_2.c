#include <stdio.h>

int main()
{
    // Mashq 2.1 (Oddiy while):
    // 1 dan 10 gacha sonlarni chop eting (while bilan).
    /*
    int i = 1;

    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    */

    // Mashq 2.2 (Yig‘indi):
    // Foydalanuvchidan N sonini oling va 1 dan N gacha bo‘lgan sonlar yig‘indisini hisoblang (while bilan).
    /*
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);

    int i = 1;
    int sum = 0;

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of from %d to until 1 is %d\n", n, sum);

    // Mashq 2.3 (PDFdagi misolga o‘xshash):
    //  i = 5 dan boshlab, i > 0 bo‘lguncha i-- qilib, har safar i ning qiymatini chop eting. Oxirida "Loop tugadi" deb yozing.

    int i = 5;

    while (i > 0)
    {
        printf("i = %d\n",i);
        i--;
    }
    printf("Loob Tugadi.\n");

    */

    // Mashq 2.4 (Tafakkur):
    // Agar while shartida i++ o‘rniga hech narsa yozmasangiz nima bo‘ladi? Nima uchun?
    // Javob: Agar i++ yozmasak loop cheksiz davom etadi. chunki While operatori qachonki false bo'lganda to'xtaydi agar false bo'lmasa checksiz davom etadi.

    return 0;
}