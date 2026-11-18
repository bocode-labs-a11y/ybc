#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);}
            }
            int flag=0
        for(int x=0;x<n;x++)
        {
            for(int y=0;y<=x;y++)
            {
                if(a[x][y]==0)
                {
                    continue;
                    }
                    else{flag=1;}
                    
                    }
                    if(flag==0){
                        printf("YES");}
                        else if(flag==1){printf("NO");}
                    return 0;}