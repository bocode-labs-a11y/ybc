#include<stdio.h>
#include<windows.h>
double is_prime(double r,double h);//函数声明-函数定义-函数调用
int main()
{
    SetConsoleOutputCP(65001);
double v,r,h;
printf("请输入半径和高度：");
scanf("%lf%lf",&r,&h);
v=is_prime(r,h);
printf("%f",v);
return 0;
}
double is_prime(double r,double h)
{
    double result;
    result=3.14*r*r*h;
    return result;
}