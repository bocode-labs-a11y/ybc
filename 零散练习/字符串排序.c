#include<stdio.h>
#include<string.h>
int main()
{
char *s[5];
char ch[5][100];
for(int i=0;i<5;i++)
{
    scanf("%s",&ch[i]);
    s[i]=ch[i];
}
for(int i=0;i<4;i++)
{
    for(int j=0;j<4-i;j++)
    {
        if(strcpy(s[j],s[j+1])>0)
        {
            char *temp;
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;

        }
    }
}
for(int k=0;k<5;k++)
{
    printf("%s",s[k]);

    if(k!=4)
putchar('\n');
}
return 0;
}