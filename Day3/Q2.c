#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 1st no : ");
    scanf("%d",&num1);
    printf("Enter 2nd no : ");
    scanf("%d",&num2);
    printf("Enter 3nd no : ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
    {
        if(num2<num3)
        {
            printf("maximum no is %d and minimum is %d ",num1,num2);
        }
       else{
        printf("maximum no is %d and minimum is %d ",num1,num3);
       }
    }
    else if(num1<num2 && num2>num3)
    {
        if(num1<num3)
        {
            printf("maximum no is %d and minimum is %d ",num2,num1);
        }
       else{
        printf("maximum no is %d and minimum is %d ",num2,num3);
       }
    }
    else if(num3>num2 && num1<num3)
    {
        if(num1>num2)
        {
            printf("maximum no is %d and minimum is %d ",num3,num2);
        }
       else{
        printf("maximum no is %d and minimum is %d ",num3,num1);
       }
    }
    else 
    {
        printf(" %d , %d and %d  is same ",num1,num2,num3);
    }
    return 0;
}