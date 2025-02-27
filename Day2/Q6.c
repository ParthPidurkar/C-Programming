#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st no : ");
    scanf("%d",&a);

    printf("Enter 2nd no : ");
    scanf("%d",&b);

    printf("Enter 3rd no : ");
    scanf("%d",&c);

    a>b?a>c?printf(" Biggest is %d",a):printf(" Biggest is %d",c):b>c?printf(" Biggest is %d",b):printf(" Biggest is %d",c);
    return 0;
}