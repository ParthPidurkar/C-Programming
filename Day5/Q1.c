#include <stdio.h>
float printRectangle(float r1,float r2)
{
    printf("length = %f, width = %f",r1,r2);
    return 0;
}
typedef struct 
{
    float length;
    float width;
}rectangle;

int main()
{
    rectangle r1;
    printf("Enter length :- ");
    scanf("%f",&r1.length);
    printf("Enter width :- ");
    scanf("%f",&r1.width);
    printRectangle(r1.length,r1.width);
    

    return 0;
}