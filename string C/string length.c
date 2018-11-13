// print string length.
#include<stdio.h>
#include<conio.h>
#include<string.h>
 main()
{
    int len;
    char name[10];
    printf("Enter a name: ");
    scanf("%s",name);
    len= strlen(name);
    printf("Name length is %d",len);
    return 0;
}
