//1.5+2.5+3.5+.....+n print the series.
#include<stdio.h>
int main()
{
    float i,sum=0,n;
    printf("Enter n value: ");
    scanf("%f,&n");
    for(i=1.5; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum= %.1f\n",sum);
    return 0;
}
