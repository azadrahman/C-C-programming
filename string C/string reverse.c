// string anagram
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char name[10];
    printf("Enter a string: ");
    scanf("%s",name);
    strrev(name);
    printf("Reverse of enter string %s",name);
    getch();
}
