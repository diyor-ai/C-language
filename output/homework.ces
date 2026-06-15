#include <stdio.h>

int main() {
    int n = 5;
    int rows = 2 * n - 1;
    int stars = 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= n - stars; j++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * stars - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        if (i < n) stars++; 
        else stars--;
    }

    return 0;
}
