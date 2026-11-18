#include<stdio.h>
int main()
{
   int radius,g;
   double height;
   char  d,e,f,h,l;
   scanf("%d%lf",&radius,&height);//浮点型和整型自动忽略数之间的空白字符，字符型不忽略
   scanf("%c%c%c",&d,&e,&f);
   scanf("%d %c",&g,&h);//需要间隔一下
   l=getchar();//getchar可以吃掉回车等空格按键
   printf("r=%d,h=%f",radius,height);
   printf("ch1=%c,ch2=%c,ch3=%C",d,e,f);//字符型不能忽略
   printf("%d %c",g,h);
   return 0;
}
//关系运算符：
大于：>
小于：<
等于:==
大于等于：>=
小于等于:<=
不等于：!=
关系运算符优先级低于算术运算符，关系运算符优先级高于赋值运算符
0为非真值
1为真值
//二进制无法精确表示小数
#include<math.h>
int main()
{
    double a=0.1;
    double b=0.2;
    double c=a+b;
    double d=0.3;
    printf("%d",fabs(c-0.3)<1e-6);//小数比较不能直接写c==d,需要如图比较，因为小数以二进制存储，存在误差
    return 0;
}
并且：&&
或者：||
不：！
逻辑运算符优先级明确，复杂条件应加括号
逻辑非>逻辑与>逻辑或
三大类运算符关系：算数>关系>逻辑
非0的数字逻辑上为真