#include <stdio.h>

int main(void)
{
    /*
    char name[20];
    int age;

    printf("What is your name? ");
    scanf("%s", name);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("Hello, %s!, You are %d years old. \n", name, age);
    */
    
    int son;
    float pi;
    char harf;
    
    printf("Enter a Integer! ");
    scanf("%d", &son);
    
    printf("Enter Real number! ");
    scanf("%f", &pi);
    
    printf("Enter only a character! ");
    scanf(" %c", &harf);
    
    printf("You entered: %d , %f , %c\n ", son , pi , harf);
    
    return 0;
}
