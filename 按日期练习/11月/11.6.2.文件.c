#include<stdio.h>
#define FILE_NAME "students.txt"
#define MAX_LINE_CHAR 100
int main()
{
    //打开data.txt
    //相对路径
    //windows:两个\\=/
    FILE *fp=fopen("./datasets/data.txt","r");//需要存在
    //如果写入的话用w
    rewind(fp);//将隐藏小箭头重新移到文件开始
    char *line=(char*)malloc(MAX_LINE_CHAR*sizeof(char));
    while(fgets(line,MAX_LINE_CHAR,fp)!=NULL)
    {
    puts(line);//自动输出换行符
    }
    rewind(fp);//重新从头再读一遍文件
    int age;
   double height;
fscanf(fp,"%d %lf",&age,&height);
printf(fp,"%d %f",age,height);
fclose(fp);
return 0;}
//int find_max(int arr[],int n)
//data.txt
//存储10个整数
