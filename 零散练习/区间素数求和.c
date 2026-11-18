#include<stdio.h>
int prime(int p);
int PrimeSum(int m, int n);
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",int PrimeSum(int m, int n));
    return 0;
    }
  int prime(int p)
  {
     if(p==2)
     return 1;
     if(p==1)
     return 0;
    if(p<=0)
    return 0;
    if(p>2)
    {
        int flag=0;
        for(int i=2;i<p;i++)
        {
            if(p%i==0)
            flag=1;
            break;}
            if(flag==0)
            return 1;
            else{
                return 0;}
                }
                }  
     int PrimeSum(int m, int n)
     {
         int sum=0;
         for(int i=m;i<=n;i++)
         {
             if(prime(i))
             sum=sum+i;}
             return sum;}