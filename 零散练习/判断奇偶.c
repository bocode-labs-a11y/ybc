#include<stdio.h>
int main()
{
    int number,result,a;
    printf("input the nmber:");
    scanf("%d",&number);

    a=number%2;
    if(a==1){
        printf("a is odd\n");
    }
    else if(a==0){
        printf("a is an even\n");
    }

    return 0;

}