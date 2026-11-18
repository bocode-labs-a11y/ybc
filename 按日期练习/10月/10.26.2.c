#include <stdio.h>
#include <string.h>
#define N 5
int main(void) {
    char str_1[100] = {'T', 'o', 'm', '1', '2', '3', '\0'};
    char str_2[100] = "Tom123";        // 字符串常量
    char str_3[] = "Tom123";           // str_3 : 7
    char *str_4 = "Tom123456789123456789";  // 保存在进程的常量区
    // str_4: 0x....CD4      'T'的内存地址
    // str_1数组在内存中占用的字节大小
    // sizeof()    运算符 + - * /
    // 8Byte = 64bit
    printf("str_1: %zu\n", sizeof(str_1));
    printf("str_2: %zu\n", sizeof(str_2));
    printf("str_3: %zu\n", sizeof(str_3));
    printf("str_4: %p size: %zu\n", str_4, sizeof(str_4));

    // 数组作为函数参数：数组名本身就是首元素的内存地址
    int age = 15;
    double pi = 3.14;
    char gender = 'M';

    printf("age: %zu\n", sizeof(age));
    printf("pi: %zu\n", sizeof(pi));
    printf("gender: %zu\n", sizeof(gender));//sizeof()：检测占据内存
    printf("int: %zu\n", sizeof(int));
    printf("double: %zu\n", sizeof(double));
    printf("char: %zu\n", sizeof(char));
    printf("int *: %zu\n", sizeof(int *));
    printf("double *: %zu\n", sizeof(double *));
    printf("char *: %zu\n", sizeof(char *));
    printf("str_1 length:%zu\n",strlen(str_1));

    return 0;
}
