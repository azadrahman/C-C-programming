#include<stdio.h>
#include<math.h>
int main()
{
    float radius, area;
    printf("Enter the Radius:\n");
    scanf("%f", &radius);
    area=M_PI*radius*radius;
    printf("Area is:%.2f", area);
    return 0;
}

/* float radius, area, PI=3.1416;
    printf("Enter the Radius:\n");
    scanf("%f", &radius);
    area= PI*radius*radius;
    printf("Area is:%.2f", area);
    return 0;*/
