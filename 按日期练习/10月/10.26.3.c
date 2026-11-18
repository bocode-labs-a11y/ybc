#include <stdio.h>
int main(void) {
    int ages[5];
    // 不可以以这种形式的语句批量赋值
    // ages = 20;

    char name_1[10] = "Tom";   // 'T' 'o' 'm' '\0'
    char name_2[] = "Jerry";
    char *name_3 = "Alice";

    // printf("%d", age);
    printf("%s\n", name_1);  // 传的是首元素的内存地址
    putchar('*');
    puts(name_2);            // puts 会自动追加换行
    putchar('#');
    for(int i=0;name_1[i]!='\0';i++)
    {
        putchar(name_1[i]);
    }
char name_5[100];
char name_6[50];
scanf("%s",name_5);//缺陷，认为输入空格，回车就已经输入完成，只能捕获连续字符
fgets(name_6,49,stdin);
int i=0;
while(name_6[i]!='\0')
{putchar(name_6[i]);
i++;}//最多可以接收49个有效字符，最后一位补充'\0',从头一直到换行符回车

    char name_2[50];
    int i = 0;
    char ch = getchar();
    while (ch != '#' && ch != EOF)
    {
        name_2[i] = ch;
        i++;
        ch = getchar();
    }
    name_2[i] = '\0';//重要
    i = 0; // 重置下标
    while (name_2[i] != '\0')
    {
        putchar(name_2[i]);
        i++;
    }
    return 0;
}

    
