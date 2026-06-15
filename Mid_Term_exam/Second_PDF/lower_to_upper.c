#include <stdio.h>

int main() {
    char ch;
    
    printf("Belgi kiriting: ");
    scanf("%c", &ch);
    
    if (ch >= 'a' && ch <= 'z') {
        printf("Kichik harf -> Katta harf: %c\n", ch - 32);
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Katta harf -> Kichik harf: %c\n", ch + 32);
    } else {
        printf("Bu harf emas!\n");
    }
    
    return 0;
}

