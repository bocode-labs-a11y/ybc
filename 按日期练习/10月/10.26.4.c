#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);//右移
    }
    printf("\n");

    
    if(n == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%02X\n", n);
    }
    return 0;
}
