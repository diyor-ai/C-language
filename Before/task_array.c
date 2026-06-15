#include <stdio.h>
#include <string.h>

// int main() {
//    char hi[8] = {'h', 'e', 'l', 'l', 'o'};
//     int i = 0;
//     for(i < 8;i++;)
//     {
//         printf("%c", hi[i]);
//     }

//    return 0;
// }


int main()
{
    char ch1[10], ch2[10];
    strcpy(ch1, "hi");
    strcpy(ch2, "ha");
    
    if(strcmp(ch1, ch2) > 0) {
        printf("ch1 > ch2\n");
    } else if(strcmp(ch1, ch2) < 0) {
        printf("ch1 < ch2\n");
    } else {
        printf("identical\n");
    }
    
    return 0;
}