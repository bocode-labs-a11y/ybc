#include<stdio.h>
int main()
{
    // double my_div(double a, double b);
// 函数指针
// int *p; p = &age;        指针
// int arr[3][3]; int (*arr)[10] 数组指针
// char *fruits[3]             指针数组
// my_calc(double a, double b, )
    double a, b, result;
    char ch;
    // 3.14 2.718 +\n
    double (*op)(double, double);
    scanf("%lf %lf", &a, &b);
    getchar();
    ch = getchar();
    switch (ch)
    {
        case '+': {
            result = (*op)(a, b);
            break;
        }
        case '-': {
            result = sub(a, b);
            break;
        }
    }
    return 0;

}