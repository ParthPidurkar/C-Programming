#include<stdio.h>
int main()
{
    int ch,num1,num2 ;
    printf("Press 1 Addition \n Press 2 Substraction \n Press 3 Multiplication \n Press 4 Division \n Press 5 Mod \n");
    printf("Enter choise :- ");
    scanf("%d",&ch);
    printf("Enter 1st number :- ");
    scanf("%d",&num1);
    printf("Enter 2nd number :- ");
    scanf("%d",&num2);
    switch(ch)
    {
        case 1:
        printf("Addition of %d and %d is %d",num1,num2,num1+num2);
        break;
        case 2:
        printf("Substraction of %d and %d is %d",num1,num2,num1-num2);
        break;
        case 3:
        printf("Multiplication of %d and %d is %d",num1,num2,num1*num2);
        break;
        case 4:
        printf("Division of %d and %d is %d",num1,num2,num1/num2);
        break;
        case 5:
        printf("mod of %d and %d is %d",num1,num2,num1%num2);
        break;
        defaut:
        printf("Invalid choise");
    }
   return 0;

}