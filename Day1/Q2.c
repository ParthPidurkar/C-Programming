#include<stdio.h>
int main()
{
    int x=10,y=20;
    printf("Before Swap \n x = %d \n y = %d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nAfter Swap \n x = %d \n y = %d",x,y);
}