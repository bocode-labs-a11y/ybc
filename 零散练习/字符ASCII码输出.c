#include<stdio.h>
int main()
{
    char ch;
    int a=0;
    while((ch=getchar())!='\n')
    {
        printf("%c:%d",ch,ch);
        cnt++;
        if(cnt%5==0)
        {
            printf("\n");
            }
            else
            {printf("\t");
            }
            }return 0;}