#include <stdio.h>
#include <stdbool.h>

#define MaxSize 10

typedef struct sqlist
{
    int data[MaxSize];
    int length;
}sqlist;

bool InsertList(sqlist* L,int i,int e){
   
    
    for (int l = L->length; l >= i; i--)
    {
        L->data[l]=L->data[l-1];
    }
    L->data[i-1]=e;
    L->length++;
    return true;
};

void initsqlist(sqlist* L1){
    for (int i = 0; i < MaxSize; i++)
    {
        L1->data[i]= 0 ;
    }
    L1->length = 0;   
};

int main(){
    sqlist L;
    initsqlist(&L);
    return 0;
};