#include<stdio.h>
int main()
{
    int num[100],n,i,max,min;
    printf("Enter array number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    min=num[0];
    max=num[0];
    for(i=1; i<n;i++)
    {
        if(max<num[i])
            max=num[i];
            else if(min>num[i])
                min=num[i];
    }
    printf("Maximum: %d\n Minimum: %d",max,min);
    return 0;
}
