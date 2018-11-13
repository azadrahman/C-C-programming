//takes three numbers and find maximum and minimum.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("Maximum %d:\n",a);
        if(b>c)
            printf("minimum %d:",c);
        if(c>b)
           printf("minimum %d:",b);
    }
    else if(b>c)
    {
        printf("Maximum %d:\n",b);
        if(a>c)
            printf("minimum %d:",c);
        if(c>a)
            printf("minimum %d:",a);
    }
    else
    {
        printf("Maximum %d:\n",c);
        if(a>b)
            printf("minimum %d:",b);
        if(b>a)
            printf("minimum %d:",a);
    }
    return 0;
}
