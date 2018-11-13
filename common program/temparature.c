//determine centigrade from far
#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter the Farenheight: ");
    scanf("%f", &F);

    C= (F-32)/1.8; //[Formula of C= (F-32)/1.8]
    printf("Centigrade=%.2f\n", C);
    return 0;
}

/*determine far from centigrade
#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter the Centigrade: ");
    scanf("%f", &C);

    F= (C*1.8)+32; //[Formula of F= (Centigrade*1.8)+32]
    printf("Fareinheight=%.2f\n", F);
    return 0;
}*/

