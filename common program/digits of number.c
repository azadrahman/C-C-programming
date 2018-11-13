//input a number and print digits of number.
#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
       printf("%d",n%10);
        n=n/10;
        printf("\n");
    }

    return 0;
}
