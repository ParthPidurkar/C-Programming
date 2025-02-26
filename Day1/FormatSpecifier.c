#include<stdio.h>
int main()
{
     char ch= 'A';
    printf("%c\n",ch);
    printf("Size of  short signed is  %d\n",sizeof(char));
    char arr[]= "ParthPidurkar";
    printf("%s\n",arr);
   
    int x= 20;
    printf("%d\n",x);
    printf("Size of  short signed is  %d\n",sizeof(int));
    float y=20.0534;
    printf("%f\n",y);
    printf("Size of  short unsigned is  %d\n",sizeof(float));
    short signed a= -10;
    printf("%d\n",a);
    printf("%i\n",a);
    printf("Size of  short signed is  %d\n",sizeof( short signed));
    short unsigned b=10;
    printf("%u\n",b);
    printf("Size of  short unsigned is  %d\n",sizeof( short unsigned));
    long signed c= -20;
    printf("%ld\n",c);
    printf("Size of  short signed is  %d\n",sizeof( long signed));
    long unsigned d=20;
    printf("%lu\n",d);
    printf("Size of  short unsigned is  %d\n",sizeof( long unsigned));
}