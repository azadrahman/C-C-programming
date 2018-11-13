// 1. input a matrix and print
// 2. sum of each rows
// 3. sum of each column
// 4. sum of 2 diagonal.
#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0;
    printf("Enter rows and column: ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter a matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<m; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum+= a[i][j];
        }
        printf("Sum of element of rows %d= %d\n",i+1,sum);
    }
    for(i=0; i<m; i++)
    {
        sum=0;
        for(j=0;j<n; j++)
        {
            sum+= a[j][i];
        }
         printf("Sum of elements of column %d= %d\n",i+1,sum);
    }
    return 0;
}
