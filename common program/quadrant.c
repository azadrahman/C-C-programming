#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the values of X and Y\n");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
        printf("(%d, %d) lies in the First quadrant",x,y);
    else if(x<0 && y>0)
        printf("(%d, %d) lies in the Second quadrant",x,y);
    else if(x<0 && y<0)
        printf("(%d, %d) lies in the Third quadrant",x,y);
    else
        printf("(%d, %d) lies in the Fourth quadrant",x,y);

    return 0;
}
