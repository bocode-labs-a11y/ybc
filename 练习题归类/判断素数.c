#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    int prime(int c);
    printf("enter the number:");
    scanf("%d",&a);
    b=prime(a);
    printf("%d",b);
    return 0;
}
int prime(int c)
{
    int i,limit;
    if(c<=1)
    {
        return 0;
    }
else if(c==2)
{
    return 1;
}
else
{
limit=sqrt(c)+1;
for(i=2;i<=limit;i++)
{
    if(c%i==0){
        return 0;
    }
}
return 1;
}
}