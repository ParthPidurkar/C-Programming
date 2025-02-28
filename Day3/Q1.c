#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 1st no : ");
    scanf("%d",&num1);
    printf("Enter 2nd no : ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("maximum no is %d and minimum is %d ",num1,num2);
    }
    else if(num1<num2)
    {
        printf("maximum no is %d and minimum is %d ",num2,num1);
    }
    else 
    {
        printf("both %d and  %d  is same ",num1,num2);
    }
    return 0;
}