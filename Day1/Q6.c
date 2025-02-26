#include<stdio.h>
int globalvar1;
int globalvar2=10;
int fun1()
{
    int localvar1;
    int localvar2=20;
    printf("local var 1 =%d \n",localvar1);
    printf("local var 2 =%d \n",localvar2);
}
int main()
{
    printf("global var 1 =%d \n",globalvar1);
    printf("global var 2 =%d \n",globalvar2);
    fun1();
    return 0;
}