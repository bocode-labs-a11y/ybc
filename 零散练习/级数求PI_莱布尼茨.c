#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double eps,item,pi;
    printf("enter eps:\n");
    scanf("%lf",&eps);
    a=1;b=1;c=1;
    item=1.0,pi=0.0;
    while(fabs(item)>=eps)
    {
        pi=pi+item;
        a++;
        b=-b;c=c+2;
        item=b*1.0/c;
    }
    pi=pi+item;
    pi=pi*4;
    printf("pi=%.4f\n",pi);
    printf("i=%d",a);
    return 0;
}