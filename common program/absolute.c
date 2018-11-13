#include<stdio.h>
int main()
{
    int x;
    printf("Enter A Number: ");
    scanf("%d",&x);

    int result= abs(x);
    printf("Absolute Value= %d",result);
    return 0;
}
