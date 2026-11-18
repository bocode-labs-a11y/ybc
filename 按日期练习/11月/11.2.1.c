#include<stdio.h>
#include<stdlib.h>//动态内存分配
#define STRING_NUM 3
#define MAX_LENGTH 20

int main(void) {
    // 存储字符串的两种方式
    char fruit[MAX_LENGTH] = "Orange";   // 字符常量
    char *name = "Tom";    // 字符串常量
    //存储多个字符串
    char fruits[STRING_NUM][MAX_LENGTH]={"apple","banana","orange"};
//数组指针 int (*p)[3];
//p++; p:+12b
//int arr[3}[3]=
//指针数组:
char *names[3]={"Tom","Jerry","Alice"};//每一个元素是一个指针
char *stu_no[5];
char *p1=NULL;//空指针
char *p2;//野指针
stu_no[0]=(char*)malloc(20*sizeof(char));//将首字节地址返回给该指针，以char类型
stu_no[1]=calloc(20,sizeof(char));//区别：动态内存分配会将内存区域置0，清除掉随机数
stu_no[1]=realloc(stu_no[1],50*sizeof(char));//重新寻找五十个字节长度的内存。并将原来的数据迁移过去

scanf("%s",stu_no[0]);//遇到空格，制表符停止
fgets(stu_no[0],MAX_LENGTH,stdin);//读取到换行符结束
char ch=getchar();
char *q=stu_no[0];
while(ch!='#'){
    *q=ch;
    q++;
    ch=getchar();
}
*q='\0';//手动补充空字符
char *p=stu_no[0];
*(p+1)='O';
puts(stu_no[0]);
//char *p=names[1];
//*p='j':无法修改指针数组
//二维字符数组，可以任意修改/有可能造成内存的浪费
//指针数组：节省内存空间，一个字符串仅仅需要八个空间/通过字符串常量 的方式，无法修改
fruits[1][0]='b';
    printf("%s\n", fruits[1]);
    puts(name);
//动态内存分配：堆
//需要手动释放：free
free(stu_no[0]);
free(stu_no[1]);
    return 0;}
    //数组指针：// 3行4列二维数组
//int arr[3][4] = {
    //{1,2,3,4},
    //{5,6,7,8},
    //{9,10,11,12}
//};
//int (*p)[4];   // 数组指针，一行4个int
//p = arr;       // arr等价 &arr[0]，把第0行的地址赋值给p
