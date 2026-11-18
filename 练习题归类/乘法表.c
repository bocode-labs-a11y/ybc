#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i;
    double pi,d,e,f,sum=0.00;
    for(i=1; ;i++)
    {
       
    d=pow(-1,i-1);
    c=2*i-1;
    e=1.0/c*d;
    sum=sum+e;
    
if(fabs(e)<=1e-6)
{
    sum+=e;
    break;
}


    }

    pi=4*sum;
    printf("%f",pi);
    return 0;}
