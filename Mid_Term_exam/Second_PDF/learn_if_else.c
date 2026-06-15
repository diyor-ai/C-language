#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age? ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are Old engough You can vote !!! ");
    }
    else
    {
        printf(" You are not 18 Years old. You can not vote.\n");
    }

    return 0;
}
