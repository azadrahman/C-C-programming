//prints sum of digits of input n.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter input N: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digits N =%d",sum);
    return 0;
}
