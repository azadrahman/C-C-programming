#include<stdio.h>
int main()
{
long int seconds, hours, minites;
printf("enter the seconds: ");
scanf("%d", &seconds);
hours= seconds/3600;
int remainingSeconds = seconds%3600;

minites= remainingSeconds/60;
seconds= remainingSeconds%60;

printf("\nThe results are : %d h : %d m : %d s,", hours,minites,seconds);
return 0;



}
