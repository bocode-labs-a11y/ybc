#include<math.h>
#include<stdio.h>
int main(void)
{
int day;
double result,factor,initial;
printf("enter initial:\n");
scanf("%2d",&initial);
printf("enter factor:");
scanf("%2d",&factor);
result=initial*pow(1+factor,day);
printf("result=%2d",result);
return 0;
}