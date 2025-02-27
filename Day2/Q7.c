#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter 1st int no : ");
    scanf("%d",&a);
    printf("Enter 2nd float no : ");
    scanf("%f",&b);
    int result1 = (int)a/b;
    printf("Type cast to int : %d\n",result1);
    float result2 = ((float)a)/b;
    printf("Type cast to float : %f",result2);
}