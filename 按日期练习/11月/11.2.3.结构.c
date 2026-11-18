#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int id;
    char *name;   // 只是一个指针，本身不存字符
};

int main(void)
{
    struct Student s;
    s.id = 1002;
    // 先在堆上开空间
    s.name = (char *)malloc(20);
    // 再拷贝字符串到堆内存
    strcpy(s.name, "Li");

    printf("%d %s", s.id, s.name);

    free(s.name); // 用完记得释放！
    return 0;
}
