#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n],min,max;
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
        
        }
    }
    printf("min=%d max=%d",min,max);
    return 0;}