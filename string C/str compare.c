// compare two string and print which is greater.
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int v;
    char str1[10], str2[10];
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("\nEnter second string: ");
    scanf("%s",str2);
    v= strcmp(str1,str2);
    if(v<0)
        printf("1st string is less than 2nd string");
   else if(v>0)
        printf("1st string is greater than 2nd string");
    else
        printf("1st string is equal to 2nd string");
    return 0;
}
