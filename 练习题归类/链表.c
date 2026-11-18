#include<stdio.h>
#include<stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
typedef struct Node Node;
typedef Node* Linklist;
void print_linklist(Linklist s)
{
   
    while(s!=NULL)
    {
        printf("%d",s->val);
        s=s->next;
    }
}
void initial_LinkList(Linklist *s, int e) {            // s: 0x4A00
    *s = ( Node *)malloc(sizeof( Node) * 1);           // 0x4A00
    (*s) -> val = e;
    (*s) -> next = NULL;
}
