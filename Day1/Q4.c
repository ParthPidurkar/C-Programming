#include<stdio.h>
int globalVariable = 10;
int fun1()
{
    int localVariable =20;
    printf("local Variable is %d\n",localVariable);
    return 0;
}
int fun2()
{
    printf("global Variable is %d\n",globalVariable);
    globalVariable = 1000;
    printf("global Variable is %d\n",globalVariable);
    return 0;
}
int main()
{
    fun1();
    fun2();
    return 0;
}