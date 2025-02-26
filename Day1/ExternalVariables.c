#include<stdio.h>
int main()
{
    extern int localVariable;
    printf ("value is %d",localVariable);
    return 0;
}