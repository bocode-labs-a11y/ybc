//sizeof()计算变量所占据的内存
//%p：输出内存地址，将完整地址打出
//指针类型的变量是保存地址的变量
//void f(int*p):void :代表这个函数无返回值，执行完不返回任何结果
//函数只能返回一个输出结果
 #include <stdio.h>

void minmax(int a[], int len, int *max, int *min);

int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
    int min, max;
    minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);//计算数组中变量个数
    printf("min=%d,max=%d\n", min, max);

    return 0;
}

void minmax(int a[], int len, int *max, int *min)
{
    int i;
    *min = *max = a[0];
    for ( i=1; i<len; i++ )
    {
        if ( a[i] < *min )
        {
            *min = a[i];
        }
        if ( a[i] > *max )
        {
            *max = a[i];
        }
    }
}
