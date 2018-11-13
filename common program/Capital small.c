#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("This is a Capital latter!!");
    }
    else if(ch>='a' && ch<='z'){
        printf("This is a small letter!!");
    }
    else {
        printf("This is not a Letter!!");
    }
    return 0;
}
