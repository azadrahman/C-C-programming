#include<stdio.h>
double triangleArea(double b,double h);
int main()
{
    double base,height;
    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter height: ");
    scanf("%lf",&height);

    double area= triangleArea (base,height);
    printf("Area= %.1f",area);
    return 0;
}
double triangleArea(double b,double h)
{
   return 0.5*b*h;
}

