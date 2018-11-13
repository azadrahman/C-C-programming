#include<stdio.h>
int digit(int n)
{
    while(n>0)
    {
        printf("%d", n%10);
        n=n/10;
        printf("\n");
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a=digit(n);
}
