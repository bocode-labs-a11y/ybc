#include<stdio.h>

int main(int argc,char *argv[])//命令行参数
{
printf("%d\n",argc);
for(int i=0;i<argc;i++)
{
    printf("%s\n",*argv[i]);
}
return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 四则运算函数
double add(double a, double b) {
    #ifdef DEBUG_MODE//条件编译,需要声明这个常量宏才能执行中间的语句
    printf("[debug]my_div function called a:%f b:%f,a,b");
    #endif
    return a + b;
}
double sub(double a, double b) {
    return a - b;
}
double mul(double a, double b) {
    return a * b;
}
double divi(double a, double b) {
    return a / b;
}

// calc：接收两个数 + 函数指针
double calc(double a, double b, double(*op)(double, double)) {
    return op(a, b);
}

int main(int argc, char *argv[]) {
    double a, b, result;
    char op[100];

    // 校验参数数量：程序名 数1 运算符 数2 → argc == 4
    if (argc != 4) {
        printf("用法：./my_calc.exe 数字1 +-*/ 数字2\n");//*加双引号
        return 1;
    }

    // 转成double
    a = strtod(argv[1], NULL);
    strcpy(op, argv[2]);
    b = strtod(argv[3], NULL);//从字符串开头开始就尽可能地去解析程序

    // 判断运算符，传入对应函数指针
    if (strcmp("+", op) == 0) {
        result = calc(a, b, add);
    } else if (strcmp("-", op) == 0) {
        result = calc(a, b, sub);
    } else if (strcmp("*", op) == 0) {
        result = calc(a, b, mul);
    } else if (strcmp("/", op) == 0) {
        if (b == 0) {
            printf("错误：除数不能为0！\n");
            return 1;
        }
        result = calc(a, b, divi);
    } else {
        printf("不支持的运算符！只支持 + - * /\n");
        return 1;
    }

    printf("%.2f %s %.2f = %.2f\n", a, op, b, result);
    return 0;
}
// *表示当前目录下所有文件，作乘号需要加双引号