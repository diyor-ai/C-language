#include <stdio.h>

int main()
{
    int i = 0, s = 0;

    for (i = 0; i < 5; i++)
    {
        s += i;
        printf("s = %d\n", s);
    }
    return 0;
}