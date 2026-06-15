#include <stdio.h>
struct STD
{
    char name[16];
    float gpa;
};

int main()
{
    struct STD std1 = {"Peter", 3.8};
    struct STD *p = &std1;
    
    printf("Name: %s\n", (*p).name);
    printf("GPA: %f\n", (*p).gpa);
    
    return 0;
}
