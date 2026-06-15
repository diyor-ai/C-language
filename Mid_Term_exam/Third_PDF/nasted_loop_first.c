#include <stdio.h>

int main()
{
  /*
  //first example for nest loop
  for(int i = 0; i < 5; i++)
   {
     for (int j = 0 ; j < 3; j++)
     {
       printf("* ");
     }
     printf("\n");
   }

   */

  // int n = 5;

  // for(int i = 1; i <= n; i++)
  // {
  //   for(int j = 1 ; j <= i ; j++)
  //     {
  //       printf("* ");
  //     }
  //     printf("\n");

  // }

  for (int i = 5; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  //       *
  //    ***
  //   *****
  //  *******
  // *********

  return 0;
}
