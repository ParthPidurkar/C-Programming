#include<stdio.h>

int main()
{
    int arr[100],n,i,j;
    printf("Enter array size :- ");
    scanf("%d",&n);
    printf("Enter array Elemets :- ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Befor array Elemets :- ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    j=n-1;
    for( i=0;i<j;i++,j--)
    {
        
        
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
    }
    
    printf("\nAfter array Elemets :- ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}