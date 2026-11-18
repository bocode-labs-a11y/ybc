#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math_ops.h"
// * 当前目录下所有文件
// 条件编译         DEBUG_MODE
int main(int argc, char *argv[]) {
    // ./my_calc.exe -a 3.14 -b 2.718 -o +
    // ./my_calc.exe -o "/" -b 2.718 -a 3.14
    // ./my_calc.exe -a 3.14 -b 2.718 
    // 改编源代码，实现-x value任意顺序的赋值与字符串拷贝操作
    extern int function_called_count;
    
    double a, b, result;
    int a_ok = 0;
    int b_ok = 0;
    int op_ok = 0;
    char op[100];
    // 0: ".\my_calc.exe\0"
    // 1: "3.14\0" -> 3.14
    // 2: "+\0"
    // 3: "2.718\0" -> 2.718
    // strtod   strtol
    for (int i = 1; i < argc; i++) {
        if (strcmp("-a", argv[i]) == 0) {
            ++i;
            a = strtod(argv[i], NULL);
            a_ok = 1;
        }
        else if (strcmp("-b", argv[i]) == 0) {
            ++i;
            b = strtod(argv[i], NULL);
            b_ok = 1;
        }
        else if (strcmp("-o", argv[i]) == 0) {
            ++i;
            strcpy(op, argv[i]);
            op_ok = 1;
        }
    }
    // a_ok 0 b_ok 1 op_ok 1
    if (!a_ok || !b_ok || !op_ok) {
        printf("Argument error!\n");
        return 1;
    }

    // strcmp() -> 0
    if (strcmp("+", op) == 0) {
        result = calc(a, b, add);
    }
    else if (strcmp("-", op) == 0) {
        result = calc(a, b, sub);
    }
    else if (strcmp("*", op) == 0) {
        result = calc(a, b, mul);
    }
    else if (strcmp("/", op) == 0) {
        result = calc(a, b, my_div);
    }
    else {
        printf("Input error!\n");
        return 1;
    }
    
    printf("Result: %f\n", result);
    return 0;
}
//编译时：gcc main.c math_ops.c -I include -o mycalc

