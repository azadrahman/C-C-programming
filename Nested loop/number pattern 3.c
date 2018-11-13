#include<stdio.h>
#include<conio.h>
int main()

{
    int i,j,n,x=0;
    printf("Enter a number to show the pattern: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            x++;
            printf(" %d",x);

        }
        printf("\n");
    }
    return 0;
}
