#include<stdio.h>
int main()
{
char *str1,str2;
char *p=str1;
while(*str1!='\0')
{
    str1++;
}
while(*str2!='\0')
{
    *str1=*str2;
    str2++;
    str1++;

}
str2='\0';

}