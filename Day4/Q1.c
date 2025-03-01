#include<stdio.h>
int Accept()
{
    int num;
    printf("Enter No :- ");
    scanf("%d",&num);
    return num;
}
int sum(int num1, int num2)
{
    return num1+num2;
}
void display(int num1,int num2,int res)
{
    printf("%d + %d = %d",num1,num2,res);
}
int main()
{
    int num1,num2,res;
    num1 = Accept();
    num2 = Accept();
    res = sum(num1,num2);
    display(num1,num2,res);
}