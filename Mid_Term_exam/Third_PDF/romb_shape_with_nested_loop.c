#include <stdio.h>

int main() {
    int n = 4;
    int ns = 1, nb = n - 1;
    
    // Yuqori yarmi
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < nb; j++) {
            printf(" ");
        }
        for (int j = 0; j < ns; j++) {
            printf("*");
        }
        ns += 2;
        nb--;
        printf("\n");
    }
    
    // Pastki yarmi
    ns -= 4;
    nb += 2;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < nb; j++) {
            printf(" ");
        }
        for (int j = 0; j < ns; j++) {
            printf("*");
        }
        ns -= 2;
        nb++;
        printf("\n");
    }
    
    return 0;
}
