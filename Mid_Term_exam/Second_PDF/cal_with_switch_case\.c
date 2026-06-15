#include <stdio.h>

int main()
{
  float a , b;
  char op;
  
  printf("Enter operation (exp: 7 + 3)");
  scanf("%f %c %f", &a , &op , &b);
  
  switch(op) 
  {
    case '+':
      printf("%.2f + %.2f = %.2f\n", a , b, a + b);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f\n", a , b , a - b);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f\n ", a , b , a * b);
      break;
    case '/':
      if(b != 0){
        printf("%.2f / %.2f = %.2f\n", a , b , a /b);
      }
      else {
        printf("You can not divide to \n");
      } 
      break;
      
     default:
      printf("Wrong operation!!!\n");
      
      }
      
  return 0;
}
