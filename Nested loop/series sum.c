//1+2+3+.....+n  print adds series
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n value: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n",i);
        sum= sum + i;
    }

    printf("\n Sum= %d\n",sum);
    return 0;
}
