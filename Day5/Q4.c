#include<string.h>
#include<stdio.h>
typedef struct {
    char courseName[100];
    int credits;
}Course;
typedef struct {
    char name[50];
    int age;
    Course arr[50];
    int noCourse;
}Student;
void display(Student s1)
{
    printf("Name :- %s",s1.name);
    printf("age :- %d",s1.age);
    for(int i=0;i<s1.noCourse;i++)
    {
        printf("Course Name :- %s",s1.arr[i].courseName);
        printf("credits :- %d",s1.arr[i].credits);
    }
    
}

int main()
{
    int i;
    Student s1;
    printf("Enter name of student: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';
    printf("Enter age of student :- ");
    scanf("%d",&s1.age);
    printf("Enter No Course :- ");
    scanf("%d",&s1.noCourse);
    getchar();
    for(i=0;i<s1.noCourse;i++)
    {
        printf("Enter name of Course: ");
        fgets(s1.arr[i].courseName, sizeof(s1.arr[i].courseName), stdin);
        s1.arr[i].courseName[strcspn(s1.arr[i].courseName, "\n")] = '\0';
        printf("Enter Course Credits :- ");
        scanf("%d",&s1.arr[i].credits);
        getchar(); 
    }
    
    display(s1);
    
    return 0;
}