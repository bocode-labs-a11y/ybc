#include<stdio.h>
#include<stdlib.h>
//getchar()=fgetc(fp):从文件读取单个字符
//fputc(字符，文件)
int main()()
{
    char*fruits[3]={"n=banana","orange","apple"};
    FILE *fp=fopen("fruits.txt","w");//a：在文件的最后位置进行写入
    if(fp==NULL)
    {
        printf("open file error!\n");
        return 1;
    }
    for(int i=0;i<3;i++)
    {
      fprintf(fp,"line%d:%s\n",i+1,fruits[i]);  
    }
    fseek(fp,0,SEEK_SET);//相当于一个光标，移动光标,3,第三参数——基准位置，第二参数——想要把光标移到哪个位置
    //SEEK_SET相当于0
    //SEEK_CUR相当于1,负数向左偏移，正数向右偏移
    //SEEK_END相当于2
    fputs("BANANA",fp);//进行覆盖方式写入
    fseek(fp,0,SEEK_END);
    fputs("abc",fp);
    printf("%ld",ftell(fp));//输出光标所在位置距离文件开头多少字节
    fclose(fp);
    return 0;
}
//fputc:向文件里写入字；
//fputs(内容，文件):向文件里写入行