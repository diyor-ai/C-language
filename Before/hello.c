#include <stdio.h>
#include <math.h>

int main()
{
    double a = 1, b = 2, c = -15;
    double d, x1, x2, p,q;

    d = b*b - 4*a*c;

    if (d >= 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    }
    else
    {
        printf("No real solutions, discriminant = %lf\n", d);
    }
    
    p = -b / (2*a);
    printf("p = %lf\n", p);
    
    q = sqrt(d) / (2*a);
    printf("q = %lf\n", q);
    
    x1 = p + q;
    x2 = p - q;
    printf("x1 = %lf\n", x1);
    printf("x2 = %lf\n", x2);
    
    return 0;
}


