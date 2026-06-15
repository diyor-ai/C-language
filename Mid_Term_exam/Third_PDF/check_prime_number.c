#include <stdio.h>

int main()
{
    /*
    int i = 2, N = 177;
    int is_Prime_ = 1;

    while (i < N)
    {
        if (N % i == 0)
        {
            is_Prime_ = 0;
        }
        i++;
    }

    if (_Prime_)
        printf("%d is a prime number\n", N);
    else
        printf("%d is not a prime number\n", N);

    */
    int N;
    printf("Sonni kiring: ");
    scanf("%d", &N);

    if (N <= 1)
    {
        printf("%d tub son emas\n", N);
        return 0;
    }

    int is_prime = 1;
    int i = 2;

    while (i * i <= N)
    {
        if (N % i == 0)
        {
            is_prime = 0;
            break;
        }
        i++;
    }

    if (is_prime)
        printf("%d tub son!\n", N);
    else
        printf("%d - tub son emas!\n", N);

    return 0;
}