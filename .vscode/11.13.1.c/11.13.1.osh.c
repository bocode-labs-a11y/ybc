#include <stdio.h>

static double negact(int x)
{
    x=-x;
    return x;
}//私有函数
 int function_called_count=0;


#define DEBUG_MODE

double add(double a, double b) {
    #ifdef DEBUG_MODE
    printf("[DEBUG] add function called a: %f, b: %f\n", a, b);
    #endif
    return a + b;
}

double sub(double a, double b) {
    #ifdef DEBUG_MODE
    printf("[DEBUG] sub function called a: %f, b: %f\n", a, b);
    #endif
    return a - b;
}

double mul(double a, double b) {
    #ifdef DEBUG_MODE
    printf("[DEBUG] mul function called a: %f, b: %f\n", a, b);
    #endif
    return a * b;
}

double my_div(double a, double b) {
    #ifdef DEBUG_MODE
    printf("[DEBUG] my_div function called a: %f, b: %f\n", a, b);
    #endif
    return b == 0 ? 0 : a / b;
}

double calc(double a, double b, double(*op)(double, double)) {
    #ifdef DEBUG_MODE
    printf("[DEBUG] calc function called a: %f, b: %f\n", a, b);
    #endif
    return op(a, b);
}                             