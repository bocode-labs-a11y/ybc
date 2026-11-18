#include<stdio.h>
#include<windows.h>
void swap(int*a,int*b);
int main()
{
    SetConsoleOutputCP(65001);
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("交换后的a,b为%d%d",a,b);
    return 0;
}
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}