// strcat means add two string
// syntax= strcat(destination string,source string)
#include<stdio.h>
#include<string.h>
main()
{
    char x[]= "This is ", y[]="Azad Rahman";
    printf("First string %s",x);
    printf("\nSecond string %s",y);
    strcat(x,y);
    printf("\nFinal string is %s",x);
    return 0;
}
/*main()
{
  char x[10],y[10];
  printf("Enter first string: ");
  scanf("%s",x);
  printf("\nEnter second string: ");
  scanf("%s",y);
  strcat(x,y);
  printf("\nFinal string is: %s ",x);
  return 0;
}*/
