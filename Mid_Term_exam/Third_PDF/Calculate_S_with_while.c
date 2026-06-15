#include <stdio.h>
#include <math.h>
int main()
{
  /*int x = 0;
  
  while (x <= 4)
  {
    printf("%d\n", x);
    x++;
  }
  
  
    int tanlov;
    
    do {
        printf("\n--- MENU ---\n");
        printf("1. Salom deyish\n");
        printf("2. Xayr deyish\n");
        printf("3. Chiqish\n");
        printf("Tanlov: ");
        scanf("%d", &tanlov);
        
        if (tanlov == 1) printf("Salom!\n");
        else if (tanlov == 2) printf("Xayr!\n");
        else if (tanlov == 3) printf("Dastur tugadi.\n");
        else printf("Noto‘g‘ri tanlov!\n");
        
    } while (tanlov != 3);
    
    */
    
        unsigned long long n, fact = 1;
    printf("N: "); scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("%d! = %d\n", n, fact);
    
}

