#include <stdio.h>

typedef struct LNode{
    int data;       //数据域
    struct LNode* next;     //指针域
}LNode,*LinkList;

void initList(LinkList* L){
    *L = (LinkList *) malloc(sizeof(LNode));
    (*L).data = 0;
    Lnode.next = null
};

int main(){
    LinkList L1;
    initList(&L1);
}