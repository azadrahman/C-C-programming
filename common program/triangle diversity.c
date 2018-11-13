
//take three sides of a triangle as input and check that is equilateral,isosceles,scalene or invalid.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b && b==c)
        printf("Equilateral!!");
        else if(a==b|| b==c)
            printf("Isosceles!!");
        else
            printf("Scalene!!");


    }
    else
        printf("Invalid!~!");
    return 0;
}
