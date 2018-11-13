#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    char ch='A';
    printf("Enter A letter to show the pattern: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %c",ch);
           ch++;
        }
        printf("\n");
    }
    return 0;
}

