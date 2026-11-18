#include<stdio.h>
#include<string.h>
#define NAME_LENGTH 100
// 函数声明
void initial_student_1(struct Student *p);
void print_student_information(const struct Student s);
struct Date {
    int year;
    int month;
    int day;
};
struct student {
    char stu_no[9];
    char *name;
    double height;
    struct Date birthday;
};

int main(void) {
    struct Date today= {2026, 11, 5};    // int / int / int
    struct student tom;//name:0xXXXX:野指针


    // stu_no: char[] / name: char * / height: double / birthday: struct Date
    strcpy(tom.stu_no, "20260001");
    tom.name = (char *)malloc(NAME_LENGTH * sizeof(char));//进程内存空间从堆里申请内存空间
    strcpy(tom.name, "Tom"); 
    tom.height = 1.75;
    tom.birthday = today;//tom.birthday是date结构体变量
    //
}
void initial_student_1(struct student *p)
{
    //p.stu_no:stu_no:一维数组的首元素地址内存
    //->箭头运算符 (*p).stu_no  等等价于 p->stu_no 先解引用，再获取其中内容
    scanf("%s",(*p).stu_no);//先对其进行解引用
    //准备姓名
    (*p).name=(char*)malloc(sizeof(char)*NAME_LENGTH);
    scanf("%s",(*p).name);
    scanf("%lf",&((*p).height));
    struct Date birthday={1997,1,1};
    (*p).birthday=birthday;//左右类型要相同
}
void print(const struct student s)
{

}