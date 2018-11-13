#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],fre[50],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<50;i++)
    {
        fre[i]=0;
    }
    for(i=0; i<n; i++)
    {
        fre[arr[i]]++;
    }
    for(i=0; i<n; i++)
    {
        if(fre[i]!=0)
            printf("Frequency of %d is: %d times\n",i,fre[i]);
    }
    return 0;
}
