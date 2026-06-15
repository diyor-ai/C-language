#include <stdio.h>

int main()
{
  int n;
  
  printf("n ni kiriting: ");
  scanf("%d", &n);
  
  for(int i = 1; i <= n ; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}
