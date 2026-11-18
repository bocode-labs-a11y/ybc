#include<stdio.h>
#include<string.h>
int main()
{
char *a="tom123";
char b[]={'a','b','c','d','\0'};
printf("a:%zu a:%zu",strlen(a),sizeof(a));
printf("b:%zu,b:%zu",strlen(b),sizeof(b));
return 0;
}