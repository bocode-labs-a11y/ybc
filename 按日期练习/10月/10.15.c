#include<stdio.h>
int main()
{
    //循环：while for do-while
    int i,n=1;
    scanf("%d",&i);
    while (n<=i) //计数器变量
    {
        printf("hello world\n");
        i++;
    }
    return 0;
}// OJ平台以文件的形式模拟用户键盘输入，将#换成EOF
#include <stdio.h>
int main(void) {
char ch;
while ((ch=getchar())!='#'&&ch!= 
EOF) {
 putchar(ch);
 }
return 0;
}