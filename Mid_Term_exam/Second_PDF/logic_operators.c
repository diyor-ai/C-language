#include <stdio.h>

int main()
{
  int a , b;
  
  printf("Enter Two numbers: \n");
  scanf("%d%d", &a , &b);
  
  // && - va ( ikkalasi ham rost bo'lishi kerak
  
  if (a > 0 && b > 0)
  {
    printf("Both of Them ara Integers !!! \n ");
  }
  
  // || - yoki (bittasi rost bo'lsa yetarli
  
  if ( a > 0 || b > 0 )
  {
    printf(" At least one of them is Integer !!! \n ");
  }
  
  // ! - emas (Teskarsini qiladi)
  
  if (!(a == b))
  {
    printf("They are not Equal !!! \n ");
  }
  
  return 0;
}
