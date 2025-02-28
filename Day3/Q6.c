#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, count = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");
    while(count<n)
    {
        printf("%d\t",first);
        next = first + second;
        first = second;
        second = next;
        count++;
    }
    return 0;
}