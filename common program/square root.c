#include<stdio.h>
int main ()
{
    int x;
    printf("Enter any Numbers: ");
    scanf("%d",&x);

    double result= sqrt(x);
    printf("Square Root: %.2lf",result);
    return 0;
}
/*#include<stdio.h>
int main()
{
    double result= sqrt(25);
    printf("Square Root: %.1lf",result);
    return 0;
}*/
