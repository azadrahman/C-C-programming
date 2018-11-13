// string number of char copy
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char name[10];
    strncpy(name,"AZAD",5);
    printf("First string is %s",name);
    strncpy(name,"AZAD",2);
    name[2]='\0';
    printf("\nSecond string is %s",name);
    getch();
}
