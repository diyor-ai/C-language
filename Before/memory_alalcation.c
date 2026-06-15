#include <stdlib.h>

int main()
{
    int i = 0, *a1=(int*)malloc(5*sizeof(int));
    for(i = 0; i < 5; i++)
    {
        a1[i] = i+1;
    }
    free(a1);
    return 0;
}