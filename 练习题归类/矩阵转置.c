#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[55][55];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
        {
            if(i>0)
                printf(" ");
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
