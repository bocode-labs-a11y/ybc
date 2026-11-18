//变量的生存周期和作用域
//生存期：什么时候这个变量出现了，什么时候消亡了
//作用域：在代码的什么范围可以访问这个变量
//（都在大括号内）
#include<stdio.h>
int main()
{
    int a[11],i=0;
    printf("input your telephone number:");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<=12;i++)
    {
        printf("%d",a[i]);
        
    }
    return 0;
    
    
}