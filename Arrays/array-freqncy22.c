#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],fre[100];
    int i,j, count;
    printf("Input %d elements in the array:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        fre[i]=1;
    }
    for(i=0; i<n; i++)
    {
        count=1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fre[j]=0;
            }
        }
        if(fre[i]!=0)
            fre[i]=count;
    }
    printf("\n Frequency of all element of array:\n");
    for(i=0; i<n; i++)
    {
        if(fre[i]!=0)
        {
            printf("Frequency of %d is: %d times\n", arr[i],fre[i]);
        }
    }
    return 0;
}

