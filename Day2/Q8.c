#include<stdio.h>
int main()
{
    int a=100,b=20,c=30,d=40,e=2;
    int result;
    result = a+b-c*d/e;
    printf("Result without using parentheses is %d\n",result);
    result = (a+(b-c)*d)/e;
    printf("Result without using parentheses is %d\n",result);
    
}