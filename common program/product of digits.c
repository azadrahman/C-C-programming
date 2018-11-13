//prints the product of digits of input n.
#include<stdio.h>
int main()
{
    int n,rem,sum=1;
    printf("Enter input N: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum*rem;
        n=n/10;
    }
    printf("Product of digits of N =%d",sum);
    return 0;
}
