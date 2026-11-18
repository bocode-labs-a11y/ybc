#include<stdio.h>
int main()
{
    int year;
    if (scanf("%d",&year)!=1)//此时未成功读到数据，因此返回值为0
   {printf("input error");//是否为非零值
    return 1;}
    int is_leap_year=((year%4==0)&&(year%100!=0))||(year%400==0);
    if(is_leap_year==1)

       
        printf("%d is a leap year",year);
        printf("###\n");
    
    return 0;
}//1.条件表达式后不加；
//2.if语句条件成立执行的语句如果只有一条，可以忽略花括号
//3.使用scanf函数时，使用if对非法值进行拦截
//比较大小交换式：
#include <stdio.h>

int main(void)
{
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { t = a; a = b; b = t; }   /* 保证 a <= b */
    if (a > c) { t = a; a = c; c = t; }   /* 保证 a 是最小 */
    if (b > c) { t = b; b = c; c = t; }   /* 保证 b <= c */

    printf("%d %d %d\n", a, b, c);
    return 0;
}
