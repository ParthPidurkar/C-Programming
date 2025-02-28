#include<stdio.h>
int main()
{
    int month;
    printf("Enter month :- ");
    scanf("%d",&month);
    switch (month)
    {
        case 1:
        printf("31 days in jan");
        break;
        case 2:
        printf("28/29 days in feb");
        break;
        case 3:
        printf("31 days in march");
        break;
        case 4:
        printf("30 days in April");
        break;
        case 5:
        printf("31 days in may");
        break;
        case 6:
        printf("30 days in june");
        break;
        case 7:
        printf("31 days in July");
        break;
        case 8:
        printf("31 days in Aug");
        break;
        case 9:
        printf("30 days in sep");
        break;
        case 10:
        printf("31 days in oct");
        break;
        case 11:
        printf("30 days in nov");
        break;
        case 12:
        printf("31 days in Dec");
        break;
    
        default:
        printf("Invalid choise");
        break;
    }
}