//
// Created by 61760 on 24-11-25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void link(char*, char*);

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char *p = (char*)malloc(10000 * sizeof(char));
        char *q = (char*)malloc(10000 * sizeof(char));
        scanf("%s %s", p, q);
        link(p, q);
        free(p);
        free(q);
    }
    return 0;
}

void link(char *p, char *q) {
        char *pp=p;
        while(1){
            if(strlen(pp)==0){
                printf("%s",p);
                printf("%s\n", q);
                return;
            }
            if((*pp)==(*q)){
                for(int i=0;i<strlen(pp);i++){
                    if(*(pp+i)==*(q+i)){;
                    }else{
                        break;
                    }
                    if(i==(strlen(pp)-1)){
                        for(int j=0;j<strlen(p)-strlen(pp);j++){
                            printf("%c",p[j]);
                        }
                        printf("%s\n",q);
                        return;
                    }
                }
            }
            pp++;
        }
}
