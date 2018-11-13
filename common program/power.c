/*#include<stdio.h>
int main()
{
    double result= pow(5,2);
    printf("%.1lf",result);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter X: ");
    scanf("%d",&x);
    printf("Enter Y: ");
    scanf("%d",&y);

    double result= pow(x,y);
    printf("Result= %1.lf",result);
    return 0;
}
