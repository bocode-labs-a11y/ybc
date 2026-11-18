#include<stdio.h>
#include<windows.h>
#include<string.h>
//int char double
//strcpy//字符串复制
//新的数据类型 
struct Date{
int year;
int month;
int day;
};//定义结构体右花括号加分号
int main()
{
    SetConsoleOutCP(65001);
int age=10;
struct Date today={2026,11,2};//为三个成员依次初始化
double pi;
pi=3.14;
struct Date yesterday;//. 成员运算符
yesterday.year=2026;
yesterday.month=11;
yesterday.day=1;
printf("Today:%d年%d月%d日",today.year,today.month,today.day);
char dest[20];
char*src="hello";
strcpy(dest,src);
//使用该函数需要预先动态内存分配

return 0;
}