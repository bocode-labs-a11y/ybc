#include <stdio.h>
void change(int x) {
x = 100;
printf("函数内部：x = %d\n"
, x);
}
int main() {
int x = 10;
printf("调用前：x = %d\n"
, x);
change(x);
printf("调用后：x = %d\n"
, x);
return 0;
}
main函数内存：
x = 10 (地址：0x100)
调用 change(x)：
创建形参 x 的副本 (地址：0x200)
将实参的值10复制到形参
change函数内部：
形参 x = 100 (地址：0x200)
change返回：
释放形参 x 的内存 (0x200被释放)
main继续：
x = 10 (0x100内容未变)
#include <stdio.h>

double global_rate = 2.718;

void change_global_rate(void) {
    printf("change_global_rate 中的 global_rate: %.3f\n", global_rate);
}

void local_demo(void) {
    double global_rate = 100.0;   // 局部同名，屏蔽全局
    printf("local_demo 中的局部 global_rate: %.3f\n", global_rate);
}

int main(void) {
    printf("main 中的 global_rate: %.3f\n", global_rate);
    change_global_rate();
    local_demo();
    printf("local_demo 执行后 global_rate: %.3f\n", global_rate);
    return 0;
}

//全局变量在任何一个函数中都可以更改
//局部屏蔽全局，就近优先
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;//*：解引用运算符|取值运算符  获得地址中存储的变量值
    *a = *b;
    *b = temp;
}

int main(void) {
    int num_1 = 3, num_2 = 5;
    printf("变量num_1的内存地址是：%p 变量num_2的内存地址是：%p\n", &num_1, &num_2);
    printf("交换前 num_1: %d  num_2: %d\n", num_1, num_2);
    swap(&num_1, &num_2);   // 传地址
    printf("交换后 num_1: %d  num_2: %d\n", num_1, num_2);
    return 0;
}
#include <stdio.h>
#include <math.h>
double conical(double radius, double height, double *surface_area)
{
double volume = 3.14 * radius * radius * height / 3.0;
double slant = sqrt(radius * radius + height * height);
*surface_area = 3.14 * radius * (radius + slant);
return volume;
}
int main() {
double r = 3.0, h = 2.5;
double s;
double v = conical(r, h, &s);
printf("半径：%.2f\n", r);
printf("高度：%.2f\n", h);
printf("体积：%.2f\n", v);
printf("表面积：%.2f\n", s);
return 0;
}//返回值为void
#include <stdio.h>

double function_1(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * function_1(n - 1);
}

int main(void)
{
    int a;
    printf("请输入一个正整数：");
    scanf("%d", &a);
    printf("%.0f\n", function_1(a));//函数堆栈，函数递归：函数直接或间接调用自己的过程
    return 0;
}
#define N 3.14//常量宏固定值，后面不需要符号

