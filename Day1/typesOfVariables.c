#include<stdio.h>
int globalVariable = 10;
int main()
{
    int localVariable =20;
    printf("global Variable = %d\n",globalVariable);
    printf("local Variable = %d\n",localVariable);
}