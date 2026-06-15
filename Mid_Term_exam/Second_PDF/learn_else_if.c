#include <stdio.h>

int main()
{
  int score;
  
  printf("Please enter your score (0-100): ");
  scanf("%d", &score);
  
  if(score >= 90)
  {
    printf("Your result is +A(very Good)\n");
  }
  else if(score >= 80)
  {
    printf("Your result is B(Good)\n");
  }
  else if(score >= 70)
  {
    printf("Your result is C(Normal)\n");
  }
  else if(score >= 60)
  {
    printf("Your score is D(Enough)\n");
  }
  else
  {
    printf("Your result is F(failed)\n");
  }
  
  return 0;
}
