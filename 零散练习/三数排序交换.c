#include<stdio.h>
void swap(int *a,int *b,int *c);
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    swap(&a,&b,&c);
    printf("%d %d %d",a,b,c);
    return 0;
    }
    void swap(int *a,int *b,int *c)
    {
        int temp;
        if(*a>*b)
        {temp=*a;
        *a=*b;
        *b=temp;}
        if(*a>*c)
        
        {temp=*a;
        *a=*c;
        *c=temp;}
        if(*b>*c)
       { temp=*b;
       *b=*c;
       *c=temp;}
       }
        
    