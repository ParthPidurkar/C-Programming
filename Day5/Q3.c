#include <stdio.h>
#include<string.h>
typedef struct 
{
    char colour[20];
    float radius;
}circle;

void print(circle *p1)
{
    strcpy (p1->colour,"green");
    p1->radius = 12;
     printf("colour = %s, radius = %f",p1->colour,p1->radius);
    
}


int main()
{
    circle p1;
    strcpy (p1.colour,"red");
    p1.radius = 10;
    printf("colour = %s, radius = %f",p1.colour,p1.radius);
    print(&p1);
    return 0;
}