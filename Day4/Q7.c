#include<stdio.h>
int main()
{
    float height,weight;
    printf("Enter the height in meter:- ");
    scanf("%f",&height);
    printf("Enter the weight in kg :- ");
    scanf("%f",&weight);
    float bmi= weight/(height*height);
    printf("Bmi is %f ",bmi);
    if(bmi<=18.4)
    {
      printf("UnderWeight");  
    }
    else if(bmi>=18.5&&bmi<=24.9)
    {
      printf("Normal");  
    }
    else if(bmi>=25.0&&bmi<=39.9)
    {
      printf("Overweight");  
    }
    else 
    {
      printf("Obese");  
    }
    
}