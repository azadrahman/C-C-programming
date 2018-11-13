// multiple between two matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][2],b[3][2],c[3][2],i,j;
    printf("Enter value of a matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter value of b matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("Multiple between two matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
