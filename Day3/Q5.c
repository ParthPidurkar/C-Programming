#include<stdio.h>
int main()
{
    int fact,res=1;
    printf("Enter Number :- ");
    scanf("%d",&fact);
    for(int i=1;i<=fact;i++)
    {
        res *= i;
    }
    printf("Factoroal is %d",res);
    return 0;
}