#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    printf("Enter num1 value : ");
    scanf("%d",&num1);
    printf("Enter num2 value : ");
    scanf("%d",&num2);
    printf("Enter operation (+,-,*,/) : ");
    scanf(" %c", &op); 
    switch (op)
    {
    case '+':
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;
    case '/':
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;
    
    default:
        printf("Invalid choise");
        break;
    }
    
    return 0;
}