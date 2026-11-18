#include<stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(65001);
    int n;
    scanf("%d",&n);
    int array[n],min,max,b;
    for(int i=0;i<n;i++){
scanf("%d",&array[i]);
    }
    min=array[0];max=array[0];
    for(int a=0;a<n;a++)
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
    }
    printf("min=%d max=%d,最大值出现的位置:%d",min,max,b);
    return 0;}
  