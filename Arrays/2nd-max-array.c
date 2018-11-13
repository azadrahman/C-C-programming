#include<stdio.h>
int main()
{
    int i,a[10],max1,max2,n;
    printf("How many array as input: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>max1)
            max1=a[i];
    }
    max2=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
    }
    printf("Second maximum number is: %d",max2);
}
