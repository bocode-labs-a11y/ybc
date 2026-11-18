#include <stdio.h>
#include<string.h>//查看字符串长度的函数
int main(void) {
    char str_1[100] = {'T', 'o', 'm', '1', '2', '3', '\0'};
    char str_2[100] = "Tom123";        // 字符串常量
    char str_3[] = "Tom123";           // str_3 : 7  默认加入'\0'
    char *str_4 = "Tom123"; // 保存在进程的常量区
    // str_4: 0x....CD4      'T'的内存地址
    // str_1数组在内存中占用的字节大小
    // sizeof()    运算符 + - * /
    printf("str_1: %zu\n", sizeof(str_1));//%zu或者%llu
    printf("str_2: %zu\n", sizeof(str_2));
    printf("str_3: %zu\n", sizeof(str_3));
    printf("str_4: %p size: %zu\n", str_4, sizeof(str_4));

    return 0;
}
//指针统一8个字节