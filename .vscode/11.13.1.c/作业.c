#include<stdio.h>
int main()
{
    FILE *fin=fopen("input.txt","r");
    FILE *fout=fopen("output.txt","w");
    char s[100][100];
    int i=0;
    int x=0;
    while(fgets(s[i],sizeof(s[i]),fin)!=NULL)
    {
        i++;
        }
        x=i;
        int dex=0
     for(int i=0;i<x;i++)
     {
         int found=0;
         int j=0;
         while(s[i][j]!='\n')
         {
             if(((s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z'))&&found==0)
             {
                 dex++;
                 found=1;
                 }
                else
                found=0;
                j++;
                }}
             fprintf(fout,"%d",dex);
             fclose(fin);
             fclose(fout);
             return 0;
             }