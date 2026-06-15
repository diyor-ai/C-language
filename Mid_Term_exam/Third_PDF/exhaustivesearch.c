#include <stdio.h>

int main() {
    int x, y, z;
    int topildi = 0;
    
    for (x = 0; x <= 30; x++) {
        for (y = 0; y <= 30; y++) {
            for (z = 0; z <= 30; z++) {
                if (x + y + z == 30 && 3*x + 2*y + z == 50) {
                    printf("Janob: %d, Xonim: %d, Bola: %d\n", x, y, z);
                    topildi = 1;
                }
            }
        }
    }
    
    if (!topildi) {
        printf("Yechim topilmadi!\n");
    }
    
    return 0;
}
