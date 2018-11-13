//syntax=strncat(destination string,source string,size)
#include<stdio.h>
#include<string.h>
main()
{
    char x[]= "SADHIN ", y[]="BANGLADESH";
    printf("%s %s",x,y);
    strncat(x,"BANGLADESH ",6);
    printf("\nProgram is: %s ",x);
    return 0;
}
