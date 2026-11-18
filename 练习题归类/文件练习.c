#include<stdio.h>
#define a "data.txt"
int find_max(int arr[],int n);
int main()
{
    FILE*fp=fopen(a,"r");
    if(fp==NULL)
    {
        printf("error");
        return 1;
        
    }
    int array[10];
    for(int i=0;i<10;i++)
    {
        fscanf(a,"%d",&array[i]);
   }
   fclose(fp);
   printf("%d",find_max(array,10));
   return 0;
}
int find_max(int arr[],int n)
{
int max;
max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
