#include <stdio.h>

long fact(int i)
{
    long n = 1;

    while (i > 0)
    {
        n = n * i;
        i--;
    }
    return n;
}

int main()
{
    printf("Factorial of 5 is %ld\n", fact(5));
}