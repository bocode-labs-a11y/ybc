#include<stdio.h>
char *match( char *s, char ch1, char ch2 );
int main()
{
    char s[10];
    scanf("%s",s);
    char ch1,ch2;
    scanf(" %c %c",&ch1,&ch2);
    }    
    char *p=match(s,ch1,ch2);
    printf("%s\n",p);
    return 0;
    }
  char *match( char *s, char ch1, char ch2 )
  {
      char *start=NULL;
      while(*s!='\0')
      {
         if(*s='ch1')
         {start=s;
         break;}
         s++;
         }
         char *p=start;
      while(*p='\0')
      {
          putchar('*p');
        if(*p==ch2)
        {putchar('\n');
        break;}
          p++;}
          return start;
          }
          
          
         
        
     
      
      
      
      
      
        