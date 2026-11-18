#include<stdio.h>
int main()
{
   int radius=-300;
   double height=271.82;
   double c=3.14159;
   char gender='F';
   char symbol='\n';
   char a=putchar(gender);//函数的调用
   char next;
   
    printf("r=%-5d\n",radius);//-是左对齐，右侧以空格填充，不加-是右对齐
    printf("r=%5d\n",radius);//域宽，预留的字符宽度，不打印符号，右对齐
    printf("r=%+5d###\n",radius);//对于正数而言，前面填充一个正号，右对齐
    printf("r=%-+5d###\n",radius);//强制符号加左对齐
    printf("r=%+05d\n",radius);//空格字符用0填充，负数的话0放在符号和数字之间
    printf("r=%f\n",height);
    printf("r=%.2f\n",height);//控制小数显示位数
    printf("r=%06.2f\n",height);//小数点前面的数字：域宽，此处意为整体部分至少预留6个单位长度的空间，小数点后保留两位小数
    printf("r=%.2e\n",height);
    printf("#1 r=%-10f###\n",c);
    printf("#1 r=%10.3f###\n",c);
    printf("#1 r=%010.3e###\n",c);
    printf("%c%c%C\n",gender,symbol,gender);
    putchar(gender);
    putchar('M');
    printf("%c\n",a);//输入流，123A直接输入，才能出现123和A
    next=getchar();//获取用户键盘输入的一个字符
    printf("%c",next);
    return 0;//向操作系统报告程序正常结束
    
}