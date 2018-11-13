//string triangle pattern
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char name[10];
    printf("Enter a name: ");
    scanf("%s",name);
    int len=strlen(name),i,j;
    for(i=0; i<len; i++)
    {
        for(j=0; j<=i;j++)
            printf("%c",name[j]);
        printf("\n");
    }
    return 0;
}
