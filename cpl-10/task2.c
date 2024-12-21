#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int dot=1;

typedef struct node{
    int name;
    int val;
    struct node *next;
}Node;

typedef struct linkedlist {
    Node *head;
    Node *tail;
}Linkedlist;

void slide(Node*node){
    Node *node2=malloc(sizeof(Node));
    if(node==NULL){
        return;
    }
    node->val=node->val/2;
    node2->name=(node->name);
    node2->val=(node->val);
    node2->next=node->next;
    node->next=node2;
}

void Append(Linkedlist *list, int val,int name) {
    Node *node=list->head;
    while((node->name!=0)||(node->val<val)){
        node=node->next;
    }
    if((node->val)/2<val&&node->val>=val){
        node->name=name;
        node->val=val;
    }else if((node->val/2)>=val){
        while(node->val/2>=val){
            slide(node);
            dot++;
        }
        node->name=name;
        node->val=val;
    }
}

void Print(Linkedlist *list){
    Node *node=list->head;
    while(node!=NULL){
        printf("%d ",node->name);
        node=node->next;
    }
}

int main(void){
    int n,q;
    double max;
    char input;
    scanf("%d%d",&n,&q);
    max=pow(2,n);
    Node *head=malloc(sizeof(Node));
    head->name=0;
    head->val=max;
    head->next=NULL;
    Linkedlist *list=malloc(sizeof(Linkedlist));
    list->head=head;
    list->tail=NULL;
    getchar();
    for(int i=0;i<q;i++){
        scanf("%c",&input);
        switch(input){
            case 'Q':
                printf("%d\n",dot);
                Print(list);
                printf("\n");
                break;
            case 'A':
                int name,space;
                scanf("%d",&name);
                scanf("%d",&space);
                Append(list,space,name);
                break;
        }
        getchar();
    }
    return 0;
}