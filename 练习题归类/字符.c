#include<stdio.h>
int main()
{
    char ch;
    printf("input character:");
    ch=getchar();
    while(ch!='\n'){
        if(ch>='A'&&ch<='Z'){

        
        ch=ch+'a'-'A';}
        else{
            ch=ch+'A'-'a';
        }
        putchar(ch);
        ch=getchar();

    }
    return 0;
}