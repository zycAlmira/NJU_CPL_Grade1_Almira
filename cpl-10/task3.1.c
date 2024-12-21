//
// Created by 61760 on 24-12-21.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char s[2000005] = {0};

typedef struct node {
    char c;
    struct node *next;
    struct node *prev;
    struct node *last_same;
} Node;

typedef struct {
    Node *head;
    Node *tail;
} linklist;

void Init(linklist *list) {
    list->head = NULL;
    list->tail = NULL;
}

void consult(int k, Node *tail) {
    Node *node = tail;

    for (int i = 0; i < k - 1; i++) {
        node = node->prev;
    }

    for (int i = 0; i < k; i++) {
        if (node == NULL) break;
        printf("%c", node->c);
        if (i < k - 1) node = node->next;
    }
    printf("\n");
}

void delete(linklist *list, linklist *ori) {

    if (!list->tail) return;
    Node *node = list->tail;
    if(node->last_same){list->tail = node->last_same;
    }else list->tail = NULL;
    if(ori->tail->prev){
        if(ori->tail==node){
            ori->tail->prev->next=NULL;
            ori->tail=ori->tail->prev;
        }else if(ori->head==node){
            ori->head->next->prev=NULL;
            ori->head=ori->head->next;
        }else{
            node->prev->next=node->next;
            node->next->prev=node->prev;
        }
    }else{
        ori->head=NULL;
        ori->tail=NULL;
    }
}

void add(linklist *list, char c, linklist *low, linklist *up) {
    Node *node = malloc(sizeof(Node));
    node->c = c;
    node->next = NULL;
    node->prev = NULL;
    if(list->tail){
        list->tail->next = node;
        node->prev = list->tail;
        list->tail = node;
    }else {
        list->head=node;
        list->tail=node;
        node->prev=NULL;
        node->next=NULL;
    }

    if (isupper(c)) {
        if (!up->tail) {
            up->head = node;
            up->tail = node;
            up->tail->last_same=NULL;
        } else {
            node->last_same = up->tail;
            up->tail = node;
        }
    } else if (islower(c)) {
        if (!low->tail ) {
            low->head = node;
            low->tail = node;
            low->tail->last_same=NULL;
        } else {
            node->last_same = low->tail;
            low->tail = node;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    linklist list, low, up;
    Init(&list);
    Init(&low);
    Init(&up);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);

        if (s[0] == '?') {
            int k;
            scanf("%d", &k);
            consult(k, list.tail);
        } else {
            unsigned long long l = strlen(s);

            for (int j = 0; j < l; j++) {
                if (s[j] == 'm') {
                    delete(&low, &list);
                } else if (s[j] == 'M') {
                    delete(&up, &list);
                } else {
                    add(&list, s[j], &low, &up);
                }
            }
        }
    }
    return 0;
}
