#include<stdio.h>
void splitfloat( double x, int *intpart, double *fracpart);
int main()
{
    double x;
    scanf("%lf",&x);
    int a;
    double b;
  splitfloat(x, &a,&b);   
  printf("%d %.3f",a,b);
  return 0;
  }
  void splitfloat( double x, int *intpart, double *fracpart)
  {
      int i=1;
     while(x>=1)
     {
         x=x-i;
         i++;
         }
       *intpart=i;
       *fracpart=x*1.0-i;
       }
    