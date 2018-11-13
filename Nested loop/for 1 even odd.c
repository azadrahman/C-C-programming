//take n value and print even value
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n value: ");
    scanf("%d",&n);
    for(i=2; i<=n; i=i+2){
        printf("%d\n",i);
    }
    getch();
    return 0;
}

/*take n value and print odd value
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n value: ");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2){
        printf("%d\n",i);
    }
    getch();
    return 0;
}*/

