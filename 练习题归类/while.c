#include<stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(65001);
    int n,i=0,a=0;
    scanf("%d",&n);
    int array[n],min,max,b;
    while(i<n){
scanf("%d",&array[i]);
i++;
    }
    min=array[0];max=array[0];//数组传递的本质就是内存地址
    while(a<n)
    {
        if(min>array[a])
        {
            min=array[a];
        }
        if(max<array[a])
        {
            max=array[a];
            b=a+1;
        
        }
        a++;

    }
    printf("min=%d max=%d,最大值出现的位置:%d",min,max,b);
    return 0;}