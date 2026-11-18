#include <stdio.h>
int main(void)
{
    int i=1;
    double n;
    double sum=0.0;
    while(1)
    {
        n=1.0/(2*i-1);
        if(n < 1e-6) break;
        printf("%d %f\n",i,n,sum);
        sum = sum + n;
        i += 2;
    }
    double pi=4*sum;
    printf("pi=%f",pi);
    return 0;
}
