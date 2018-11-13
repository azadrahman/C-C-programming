//string single variable print
#include<stdio.h>
#include<conio.h>
main()
{
    char name[10];
    int i=0;
    printf("Enter a string: ");
    scanf("%s",name);
    while(name[i]!='\0')
    {
      printf("%c is stored at %u",name[i],&name[i]);
      i++;
      printf("\n");
    }

    return 0;
}
