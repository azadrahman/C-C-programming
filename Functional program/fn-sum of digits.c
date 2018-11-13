#include<stdio.h>
int digit(int n)
{
    int rem, sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digits is %d", sum);
    return 0;

}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a= digit(n);
}
