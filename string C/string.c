// string variable declaration
#include<stdio.h>
#include<conio.h>
 main()
 {
     //char name[5]={'A', 'Z', 'A', 'D', '\0' };
     //char name[]= "AZAD";
     char name[10];
     printf("Enter your name: ");
     scanf("%s",&name);
     printf("Your name is: %s",name);
     return 0;

 }
