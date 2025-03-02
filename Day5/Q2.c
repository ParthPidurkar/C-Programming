#include <stdio.h>
#include<string.h>
typedef struct 
{
    char name[50];
    int age;
}person;

int main()
{
    person p1;
    strcpy (p1.name,"Parth Pidurkar");
    p1.age = 22;
    printf("Name = %s, Age = %d",p1.name,p1.age);

    return 0;
}