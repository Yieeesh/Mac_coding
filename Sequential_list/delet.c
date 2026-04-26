#include <stdio.h>
#define MaxSize 10    //定义表最大容量

typedef struct sqlist{
    int data[MaxSize];
    int length;
}sqlist;    //定义一个结构体，存储数据

void Delete(sqlist *L,int i,int* e)
{
    if (L->length == 0); return;
    if (i>L->length || i<=0 ) return;
    
    *e = L->data[i-1];
    for (int y = i; y < L->length-1; y++)  
    {
        L->data[y-1] = L->data[y];  //将元素挨个前移
    };
    L->length--;
};

int main(){
    sqlist L;
    //
    return 0;
};