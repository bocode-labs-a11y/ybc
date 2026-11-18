#include <stdio.h>
#include <stdlib.h>
#define N 10
#define MAX_LENGTH 100
//枚举
//周一：1
//周二：2
//周日：7 enum 开头
enum Weekday{
    Mon=1,TUE,WED,THUR,FRI,SAT,SUN//默认从0开始赋值
};//数字与枚举内容匹配
// 数据结构 链表：   数组：连续存储
struct LNode {
    int element;
    struct LNode *next;//区别于数据
};

typedef struct LNode LNode;
typedef LNode *LinkList;

void print_all_nodes(LinkList s);

void initial_LinkList(LinkList *L, int e);         // malloc

void add_node(LinkList L); 
// 1. malloc  2. element: 7    3. 将尾节点的next值修改为1 address
// 4. 新节点的next 是NULL

int main(void) {
    // 不允许直接声明 LNode 类型的变量
    LinkList L = NULL;
    initial_LinkList(&L, 5);
    print_all_nodes(L);
    enum Weekday today=FRI;
    return 0;
}

void print_all_nodes(LinkList s) {
    struct LNode *p = s;
    while (p != NULL) {
        printf("%d ", p -> element);
        p = p -> next;      // p 尖 next
    }
    printf("\nEND!\n");
}

void initial_LinkList(LinkList *s, int e) {            // s: 0x4A00
    *s = (struct LNode *)malloc(sizeof(struct LNode) * 1);           // 0x4A00
    (*s) -> element = e;
    (*s) -> next = NULL;
}