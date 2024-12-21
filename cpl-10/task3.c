//
// Created by 61760 on 24-12-21.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct node{
    char c;
    struct node *next;
    struct node *prev;
    struct node *last_same;
}Node;

typedef struct {
    Node *head;
    Node *tail;
}linklist;

void Init(linklist *list) {
    list->head = NULL;
    list->tail = NULL;
}

void consult(int k,Node *tail){

    Node *node=tail;

    for(int i=0;i<k-1;i++){
        node=node->prev;
    }

    for(int i=0;i<k;i++){
        printf("%c",node->c);
        if(i<k-1) node=node->next;
    }

}

void delete(linklist *list,linklist *ori){

    if(list->tail==NULL)  return;

    Node *node=list->tail;
    node->prev->next=node->next;

    if(node!=ori->tail) node->next->prev=node->prev;
}

void add(linklist *list,char c,linklist *low,linklist *up){

    Node *node=malloc(sizeof(Node));
    node->c=c;

    if(list!=NULL){
    node->prev=list->tail;
    list->tail->next=node;
    list->tail=node;

    if(isupper(c)){
        if(up->tail==NULL){
            up->tail=node;
            up->head=node;
        }else{
            up->tail->next=node;
            up->tail=node;
        }

    }else if(islower(c)){
        if(low->tail==NULL){
            low->tail=node;
            low->head=node;
        }else{
            low->tail->next=node;
            low->tail=node;
        }
    }

    }else{
        list->tail=node;
        list->head=node;
    }
}

int main(){
    int n;
    scanf("%d",&n);

    linklist list,low,up;
    Init(&list);
    Init(&low);
    Init(&up);

    for(int i=0;i<n;i++){

        char s[2000005]={0};
        scanf("%s",s);

        if(s[0]=='?'){

            int k;
            scanf("%d",&k);
            consult(k,list.tail);

        }else{

            unsigned long long l=strlen(s);

            for(int j=0;j<l;j++){

               if(s[j]=='m'){
                   delete(&low,&list);
               }else if(s[j]=='M'){
                   delete(&up,&list);
               }else {
                   add(&list,s[j],&low,&up);
               }

            }
        }
    }
    return 0;
}