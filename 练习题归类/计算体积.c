#include<stdio.h>
int main()
{
    double h,r,v;
    double cy (double a,double b);
    printf("enter r and h:");
    scanf("%lf%lf",&r,&h);
    v=cy (r,h);
    printf("v=%.3f\n",v);
    return 0;
}
double cy (double a,double b)
{
    double result;
    result=3.1415926*a*a*b;
    return result;
}