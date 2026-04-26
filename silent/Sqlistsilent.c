#include <stdio.h>
#define MaxSize 10    //定义表最大容量

typedef struct sqlist{
    int data[MaxSize];
    int length;
}sqlist;    //定义一个结构体，存储数据

void initsqlist(sqlist *list)
{
    for (int i = 0; i < MaxSize; i++)
    {
         list->data[i] = 0 ;
    };
    list->length = 0;
}              //声明一个初始化函数，这个函数的传入值是指向类型为sqlist的指针
;

int main(){
    sqlist L;
    initsqlist(&L);
    //
    return 0;
}