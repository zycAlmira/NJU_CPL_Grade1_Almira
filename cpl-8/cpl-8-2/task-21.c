#include <stdio.h>
#include <malloc.h>
#include <string.h>
void link(char*,char*);
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char *p=(char*)malloc(10000*sizeof(char)),*q=(char*)malloc(10000*sizeof(char));
        scanf("%s %s",p,q);
        link(p,q);
        free(p);
        free(q);
    }
    return 0;
}
void link(char *p,char *q){
    while(1){
        if (*p == '\0') {
            break;
        }
        if(strstr(q,p)==NULL||*p!=*q)
        printf("%c",*p);
        if(strstr(q,p)==q){
            break;
        }
        p++;
    }
    printf("%s\n",q);
}

