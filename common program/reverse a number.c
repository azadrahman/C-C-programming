//program to reverse a given number.
#include<stdio.h>
int main()
{
    int n,a,r=0;
    printf("Enter any number to get its reverse: ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
    }
    printf("Reverse = %d",r);
    return 0;
}
