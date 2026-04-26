#include <stdio.h>
#define MaxSize 10    //定义表最大容量

typedef struct sqlist{
    int data[MaxSize];
    int length;
}sqlist;    //定义一个结构体，存储数据

void Insertlist(sqlist *L,int y,int e)
{
    if (L->length >= MaxSize) return;
    if ( y<0 || y > L->length) return;

    for (int i = L->length-1; i >= y ; i--)
    {
        L->data[i+1]=L->data[i];
    };
    L->data[y]= e;
    L->length++;
};

int main(){
    sqlist L;
    initsqlist(&L);
    //
    return 0;
}