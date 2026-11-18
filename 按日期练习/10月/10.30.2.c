#include <stdio.h>
#include<string.h>
#define N 5
#define MAX_LENGTH 20
int my_strlen(char*s);
void my_strcat(char*s1,char*s2,char*s);


int main(void) {
    int nums[N] = {10, 20, 30, 40, 50};
    int age = 20;
    nums[1] = -20;
    char movie[MAX_LENGTH] = "Tom and Jerry";
    char *str_1 = "Tom and Jerry";
    printf("%s\n", movie);//%s输出字符串，
    //打印的是副本，原件在只读区不可更改，副本可以更改，
    //打印输出的是副本，只能读取只读数据段，不能尝试对其中元素修改
    //指针对原件直接进行修改，强行修改会受到警告

    // movie[0] = 'T';
    // movie[1] = 'o';
    // movie[10] = 'y';
    // movie[11] = '\0';
    my_strlen(movie);
    printf("%ld",my_strlen(movie));
    printf("%ld",strlen(movie));
    return 0;
}
int my_strlen(char*s)
{
    int count=0;
    char*p=s;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}
void my_strcat(char*s1,char*s2,char*s)//拼接字符串
{
char*p1,*p2,*p3;
p1=s1;
p2=s2;
p3=s;
while(*p1!='\0'){
    *p3=*p1;
    p1++;
    p3++;
}
while(*p2!='\0')
{
    *p3=*p2;
    p2++;
    p3++;
}
*p3='\0';

}