#include<stdio.h>
int main()
{
    int choice,i;
   double price;
    for(i=1;i<=5;i++)
    {
      printf("enter number:\n");
    scanf("%d",&choice);
    if(choice==0)
    break;
    switch(choice){
        case 1:
        price=3.0;
        break;
        case 2:
        price=4.0;
        break;
        case 3:
        price=3.3;
        break;
        case 4:
        price=4.0;
        break;
        case 5:
        price=7.0;
        break;
    default:price=0;break;}
        printf(" the price is:%lf",price);
    }
    printf("Thanks\n");
    return 0;
}