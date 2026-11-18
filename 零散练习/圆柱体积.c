#include<stdio.h>
double volume(double r,double h);
int main()
{
    float r,h,v;
    float f=3.14;
    
    printf("enter r and h:\n");
    scanf("%f%f",&r,&h);
    printf("v=%.2f",volume(r,h));
    return 0;
}
double volume(double r,double h)
{
    float result;
    float pi=3.14;
    result=pi*r*r*h;
    return result;
}