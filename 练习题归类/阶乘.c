#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int n;int a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        }
        int count=bubble(a,n);
        for(int i=0;i<n;i++)
        {
            if(i>0)
            printf(" ");
            printf("%d",a[i]);
            printf("\n");
            printf("%d",count);
            return 0;}
  void swap(int *x,int *y)    
            {
                int t=*x;
                *x=*y;
                *y=t;}
                int bubblesort(int arr[],int n)
                {int cnt=0;
                for(int i=0;i<n-1;i++)
                {
                    for(int j=0;j<n-1;j++)
                    {
                        if(arr[j]>arr[j+1])
                        {
                            swap(&arr[j],&arr[j+1]);
                            cnt++;
                            }
                            }
                            }
                            return cnt;}