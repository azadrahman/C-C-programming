//given three arms of triangle find the area
#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("Please enter the three arms of triangle:\n");
    scanf("%f%f%f",&a, &b, &c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area:%.2f\n", area);
    return 0;

}
