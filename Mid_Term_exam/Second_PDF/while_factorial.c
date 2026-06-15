#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long faktorial = 1;  // Kattaroq tur
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Manfiy sonning faktoriali mavjud emas!\n");
        return 1;
    }
    
    while (i <= n) {
        faktorial = faktorial * i;
        i++;
    }
    
    printf("%d! = %llu\n", n, faktorial);
    
    return 0;
}
