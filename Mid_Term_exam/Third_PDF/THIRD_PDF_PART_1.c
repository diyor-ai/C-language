#include <stdio.h>

void main()
{
    /*for (int i = 1; i < 6; i++)
    {
        printf("Hello world\n");
    }
    */

    // Birinchi Task

    /*

    // Mashq 1.1 (Oddiy):
    // Yuqoridagi S ni hisoblash kodini while loop yordamida to‘liq yozing (1 dan 5 gacha).

    int x = 1;
    double S;
    while (x <= 5)
    {
        x += 1;
        S = 1.0 / x * x;
        printf("S = %lf\n", S);
    }

    // Birinchi vazifani to'grisi


    int x = 1;
    double S = 0.0;

    while (x <= 5)
    {
        S = 1.0 / x * x;
        x++;
    }
    printf("S = %lf\n", S);

    */

    /*
    Mashq 1.2 (Biroz qiyinroq):
    Foydalanuvchidan N sonini oling va 1 dan N gacha bo‘lgan sonlarning kvadratlar yig‘indisini hisoblang.

    int n;
    printf("Please enter a number n: ");
    scanf("%d", &n);

    int sum;

    for (int i = 1; i <= n; i++)
    {
        int m = i * i;
        sum = sum + m;
    }
    printf("The sum of numbers is %d\n", sum);

*/

    // Ikkinchi vazifani To'grisi

    int n;
    printf("N ni kiriting: ");
    scanf("%d", &n);

    int sum = 0; // Muhim!

    for (int i = 1; i <= n; i++)
    {
        sum += i * i; // qisqa va to‘g‘ri
    }

    printf("1 dan %d gacha kvadratlar yig'indisi = %d\n", n, sum);

    /*
        Mashq 1.3 (Tafakkur):
        Nima uchun 1.0/(x*x) deb yozilgan? 1/(x*x) deb yozsak nima bo‘ladi? (Izoh bering)

        Javob: chunki biz S ning type ni double deb atadik int emas, agar 1 bersak compiler bizni xato type berdik deydi va bug beradi.
    */

    // Mash 1.3 ning to'gri javobi

    /*
        1.0 / (x * x) deb yozishning sababi — integer division ni oldini olish.

        Agar 1 / (x * x) deb yozsak: 1 va x*x ikkalasi ham int bo‘lgani uchun natija butun son bo‘ladi (masalan 1/4 = 0).
        1.0 qo‘shsak, hisoblash double turida bo‘ladi va to‘g‘ri kasr chiqadi.

        Misol:
        Cprintf("%lf\n", 1 / 4);     // 0.000000
        printf("%lf\n", 1.0 / 4);   // 0.250000

    */
}
