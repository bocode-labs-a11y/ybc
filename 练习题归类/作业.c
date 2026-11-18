#include<stdio.h>
int fib(int n);
void PrintFN(int m,int n);
int main()
{
    int m,n,t;
    if(scanf("%d %d %d",&m,&n,&t)!=3)
    return 0;
    printf("%d\n",fib(t));
    PrintFN(m,n);
    return 0;}
int fib(int n)
{
    int a=1,b=1,c;
    if(n<=2){return 1;}
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;}
        return b;}
 void PrintFN(int m,int n)
 {int a=1,b=1,c,cnt=0;
     while(a<=n)
     {
         if(a>=m)
         {
             if(cnt++)
             {
                 putchar(' ');}
                 printf("%d",a);}
                 c=a+b;a=b;b=c;}
                 if(cnt==0)
                 printf("No Fibonacci number");
                 putchar('\n');}