#include<math.h>
int main()
{
    double a=0.1;
    double b=0.2;
    double c=a+b;
    double d=0.3;
    printf("%d",fabs(c-0.3)<1e-6);//小数比较不能直接写c==d,需要如图比较，因为小数以二进制存储，存在误差
    return 0;
}