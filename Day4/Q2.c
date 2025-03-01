#include<stdio.h>

int main()
{
    int arr[100],n;
    printf("Enter array size :- ");
    scanf("%d",&n);
    printf("Enter array Elemets :- ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
           if(arr[i]<arr[j])
           {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
    printf("Minimun element of array is %d \n Maximun element of array is %d ",arr[0],arr[n-1]);
}