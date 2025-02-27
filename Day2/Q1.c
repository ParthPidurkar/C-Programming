#include<stdio.h>
int perincrement()
{
    int a=10;
    printf("Before preincrement a = %d\n",a);
    printf("After preincrement a = %d\n",++a);
    printf(" preincrement a = %d\n",a);
}
int postincrement()
{
    int a=10;
    printf("Before preincrement a = %d\n",a);
    printf("After preincrement a = %d\n",a++);
    printf(" preincrement a = %d\n",a);
}
int main()
{
    perincrement();
    postincrement();
}