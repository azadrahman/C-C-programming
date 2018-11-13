//2+4+6......+n print even adds series
#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter n value: ");
    scanf("%d",&n);
    for(i=2; i<=n; i=i+2)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("\nSum%d\n",sum);
    return 0;
}
