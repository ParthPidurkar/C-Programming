#include <stdio.h>

int main() {
    int n,rev=0,rem=0,i;
    printf("Enter the number : ");
    scanf("%d", &n);
    for( i=1;i<=n;i++);
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
    
    return 0;
}