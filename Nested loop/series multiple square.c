//1^2*2^2*3^2*......*n^2 print the multiple series
#include<stdio.h>
int main()
{
    int n,i,sum=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum= sum*i*i;
    }
    printf("Sum= %d\n",sum);
    return 0;
}

