#include <stdio.h>

int main()
{
  int x = 1;
  double S =  0;
  
  S += 1.0 / (x * x);
  x += 1;
  S += 1.0/(x*x);
  x += 1;
  S += 1.0 / (x * x);
  x += 1;
  S += 1.0 / (x * x);
  x += 1;
  S += 1.0 / (x * x);
  printf("S = %lf\n", S);
  return 0;
}
