#include <stdio.h>

int main() {
    int n,rev=0,rem=0;
    printf("Enter the number : ");
    scanf("%d", &n);

    do{
        rem = (n%10);
        rev = (rev*10)+rem;
        n = n/10;
    }while(n>0);
    printf("reversed No is %d ",rev);
    return 0;
}