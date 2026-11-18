#include<stdio.h>
#include<string.h>
#define MAX 10000
char *delete_space(char *str);
int main()
{
    char line[MAX];
    int x=0;
    while(fgets(line,sizeof(line),stdin)!=NULL)
    {
        int len=0;
        while(line[len])!='\0')
        len++;
        while(len>0&&(line[len-1]=='\n'||line[len-1]=='\r')
        line[--len]='\0';
        x++;
        if(line[x]==NULL)
        printf("%s",delete_space(line));
        else
        printf("%s\n",delete_space(line));}
        return 0;
        }
   char *delete_space(char *str)
   {
    char *p=str;
    char *q=str;
    while(*p!='\0')
    {
        if(*p!=' ')
        *q++=*p;
        p++;
        }
        *q='\0';
        return str;
        }
        
    
          
           