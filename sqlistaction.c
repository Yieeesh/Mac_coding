#include <stdio.h>
#include <stdlib.h>
#define InitSize 10

typedef struct seqlist
{
    int* data;
    int maxsize;
    int length;
}seqlist;

void initseqlist(seqlist *L){
    L->data=(int*)malloc(sizeof(int)*L->maxsize);
    L->length = 0;
    L->maxsize = InitSize;
}

void increasesize(seqlist *list,int len){
    int* p= list->data;
    list->data=(int*)malloc(sizeof(int)*(list->maxsize+len));
    for (int i = 0; i < list->length; i++){
        list->data[i]=p[i];
    }
    list->maxsize = list->maxsize + len;
    free(p);
}


int main(){
    seqlist LIST;
    initseqlist(&LIST);
    

}
;