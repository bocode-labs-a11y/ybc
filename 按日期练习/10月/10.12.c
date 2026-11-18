#include<stdio.h>
#include<windows.h>//中文输入指令
int main()
{
    SetConsoleOutputCP(65001);
    int a,b,max;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("equal");
        return 0;
    }
    max=(a>b)?(max=a):(max=b);//符合条件执行问号后语句，不符合执行冒号后
    printf("最大值=%d",max);
    return 0;
    }
switch(choice){
    case'A':{
        break;
    }
    case'B'{
        break;
    }//多个case可共用一组语句，default用于处理未匹配情况
    default:
}
//字符串结束符:\0
//小结
关系表达式产生0或1，==不能误写成=
逻辑运算符组合条件，并具有短路行为
浮点近似相等需要结合尺度选择容差
if‑else覆盖路径；else‑if顺序影响分类结果
花括号明确作用域和else配对
switch适合离散等值分支，注意break/default
AI用于审查和生成测试，结论以编译与运行证据为准