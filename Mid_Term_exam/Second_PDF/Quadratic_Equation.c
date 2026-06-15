#include <stdio.h>
#include <math.h>

int main()
{
    float a = 0, b = 0, c = 0, delta = 0;
    float x1 = 0 , x2 = 0, p = 0 , q = 0;
    
    printf("Input a , b , c : \n");
    scanf("%f%f%f", &a , &b , &c);
    
    delta = b*b - 4 * a * c;
    
    if(delta >= 0)
    {
      p = -b /(2*a);
      q = sqrt(delta)/(2*a);
      x1= p + q;
      x2 = p - q;
      printf("x1=%f, x2=%f", x1, x2);
    }
    else 
    {
      printf("No real solutions!\n");
    }
    
    return 0;
}

