#include<math.h>
#include<stdio.h>
int main(void)
{
int n,e;
double a,c,sum=0.0;
printf("ehter the n:\n");
scanf("%d",&n);
for(e=1;e<=n;e++)
{
    a=pow(-1,2*e-1)/(2*e-1);
    sum=sum+a;
}
printf("sum=%lf",&sum);
return 0;
}
