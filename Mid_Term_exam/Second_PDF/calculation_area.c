#include <stdio.h>

int main()
{
  float radius;
  float pi = 3.14;
  float area;
  
  printf("Enter radius of number: ");
  scanf("%f", &radius);
  area = radius * radius * pi;
  
  printf("Area of circle is %f\n", area);
  
  return 0;  
}
