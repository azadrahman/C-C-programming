//1^2+2^2+3^2+......+n^2
//same as 1^3+2^3+3^3+......+n^3 series
#include<stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("Please enter n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+ i*i;
    }
    printf("Sum= %d\n",sum);
    return 0;
}
