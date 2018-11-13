// program to find transpose of a matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][2],t[2][3],i,j;
    printf("Enter value of a matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d\n",a[i][j]);
            t[j][i]=a[i][j];
        }
    }
    printf("Transpose of matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
