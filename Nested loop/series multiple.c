//1*2*3*4*......*n print the multiple series
#include<stdio.h>
int main()
{
    int n,i,sum=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum= sum*i;
    }
    printf("Sum= %d\n",sum);
    return 0;
}
