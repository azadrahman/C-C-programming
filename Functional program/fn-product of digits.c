#include<stdio.h>
int digit(int n)
{
    int rem, sum=1;
    while(n>0)
    {
        rem=n%10;
        sum=sum*rem;
        n=n/10;
    }
    return a;

}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=digit(n);
    printf("Sum of product is: %d",a);
    return 0;
}
