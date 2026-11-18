#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[500];
    fgets(s,sizeof(s),stdin);
    int n=0;
    while(s[n]!='\0')
        n++;
    // 去掉换行符
    if(n>0 && s[n-1] == '\n')
    {
        s[n-1] = '\0';
        n--;
    }
    int flag = 0;
    for(int i = 0; i < n/2; i++)
    {
        // tolower：统一转小写，实现忽略大小写
        char a = tolower((unsigned char)s[i]);
        char b = tolower((unsigned char)s[n-1-i]);
        if(a != b)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("no");
    else
        printf("yes");
    return 0;
}
