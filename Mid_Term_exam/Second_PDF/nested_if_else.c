#include <stdio.h>

int main()
{
  int num;
  
  printf("Enter a number: ");
  scanf("%d", &num);
  
  if(num > 0)
  {
    printf("Number is positive.\n");
    
    if(num % 2 == 0)
    {
      printf("And it is even number.\n");
    }
    else {
    printf(" And it is odd number.\n");
    }
  }
  else if(num < 0)
  {
    printf("Number is negative.\n");
  } else {
    printf("Number is Equal to 0.\n");
  }  
  
  return 0;
}
