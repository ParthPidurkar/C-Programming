#include<stdio.h>

int main()
{
    int arr[100],n,sum=0;
    printf("Enter array size :- ");
    scanf("%d",&n);
    printf("Enter array Elemets :- ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    
    printf("Average of all array is %d ",sum/n);
}