#include<stdio.h>
void fun()
{
    static int counter =0;
    counter++;
    printf("Counter is %d\n", counter);
}
int main()
{
    for(int i=0;i<5;i++)
    {
        fun();
    }
    return 0;

}