#include<stdio.h>
#include<stdlib.h>
void initial_LinkList(struct LNode *s,int e);
struct LNode{
    int element;
    struct LNode *next;//允许；
    //struct LNode next;不合法
};
void print_all_nodes(struct LNode *s) {
    struct LNode *p = s;
    while (p != NULL) {
        printf("%d ", p -> element);
        p = p -> next;        // p 指向 next
    }
    printf("\n END!\n");
}


void initial_LinkList(struct LNode *s,int e)
{
    s=(struct LNode*)malloc(sizeof(struct LNode)*1);
    (*s).element=e;
    s->next=NULL;//p

}
//1.malloc 2. element 3.将尾点的next改为1 adress
//新节点的next是NULL