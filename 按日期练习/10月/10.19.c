#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    int a,i,b,flag=1;
    if(scanf("%d",&a)!=1||a<2)
    {
        printf("error input\n;");
        return 1;
    }
    for(i=2;i<(a-1);i++)
    {
b=a%i;
if(b==0){
    flag=0;
    printf("no");
    break;//跳出全局循环，continue进行下次循环
    \\无限循环：while(1)
}

    }
    if(b!=0)
    {
        flag=1;
        printf("yes");

    }
    printf("程序结束\n");
    return 0;
}