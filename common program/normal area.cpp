#include <stdio.h>
int main (){
	float base, height, area;
	printf("Enter the base:");
	scanf("%f",&base);
	printf("Enter the height:");
	scanf("%f",&height);
	area= 0.5*base*height;
	printf("The area of triangle is=%.3f\n",area);
	return 0;
}
