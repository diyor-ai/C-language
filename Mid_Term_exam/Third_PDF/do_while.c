#include <stdio.h>

int main()
{
    // int i = 3;

    // do
    // {
    //     --i;
    //     printf("%d\n", i);
    // } while (i > 1);

    // Mashq 3.1 (Oddiy):
    //  Foydalanuvchidan musbat son oling. Agar manfiy son kiritilsa, qayta so‘rang (do-while bilan).

    /*
    int n;
    do
    {
        printf("Enter positive number: ");
        scanf("%d", &n);

    } while (n < 0);

    */

    // To'gri javob

    int n;
    do
    {
        printf("Musbat son kiriting: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Siz kiritgan musbat son: %d\n", n);

    /*Mashq 3.2:
    i = 1 dan boshlab, i <= 10 bo‘lguncha sonlarni chop eting (do-while bilan).

    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;

    } while (i <= 10);


    // Mashq 3.3 (Muhim):
    // Foydalanuvchidan N oling va 1 dan N gacha bo‘lgan sonlar yig‘indisini do-while bilan hisoblang.

    int num;
    printf("Please enter number N: ");
    scanf("%d", &num);
    int sum = 0;
    do
    {
        sum = sum + num;
        num--;

    } while (num >= 1);

    printf("Sum is %d\n", sum);

    */

    // Tog'ri javob

    int N;
    printf("N ni kiriting: ");
    scanf("%d", &N);

    int sum = 0;
    int i = 1;

    do
    {
        sum += i;
        i++;
    } while (i <= N);

    printf("1 dan %d gacha yig'indi = %d\n", N, sum);

    // Mashq 3.4 (Tafakkur):
    // while va do-while ni solishtiring. Qaysi holatda do-while ni ishlatish yaxshiroq?
    //  while va do_whileni farqi do_whileda false bo'lishidan qati nazar do ichidagi code birmartda bajariladi.whileda esa shart to'gri bo'lsa code bajariladi.

    return 0;
}