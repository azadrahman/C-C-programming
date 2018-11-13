#include<stdio.h>
void sum(int a,int b,int c)
{
    printf("Total Sum= %d\n",a+b+c);

}
void sub(int a,int b)
{
    printf("Total Sub= %d\n",a-b);
}
int main()
{
    sum(10,20,30);
    sum(100,200,300);
    sub(40,20);
    return 0;
}
