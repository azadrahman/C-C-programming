#include<stdio.h>
double sumofavg(int a, int b, int c)
{
   double sum=0;
   sum= a+b+c;
   double avg=sum/3;
   printf("Sum of average : %.3lf",avg);
}
int main()
{
   int a,b,c;
   printf("Enter tree number: ");
   scanf("%d%d%d",&a,&b,&c);
   double result=sumofavg(a,b,c);
}
