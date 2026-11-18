//正数二进制最高位为0，相反数为补码
//按位与运算:对应二进制为都为1则为1
#include<stdio.h>
int main()
{
    short a=10;//00001010
    short b=-72;//10110111
    short c=a&b;//00000010
    FILE *fp=fopen("bit.txt","wb");
    fwrite(&a,sizeof(short),1,fp);
    fclose(fp);
    return 0;
}
//按位或|：只要对应位有一个位是1，那么该位就是1
//按位异或^：对应位结果不同运算结果为1
//按位取反：~,字面意思
//左移<<左移位数  short c=a<<3;