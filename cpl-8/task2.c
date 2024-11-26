#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
void transform(char *str) {
    while (*str!= '\0') {
        if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}
int main(){
    char *p;
    p=(char*)malloc(sizeof(char));
    while(1){
        scanf("%s",p);
        if(p==NULL){
            return 0;
        }
        transform(p);
        *p=toupper(*p);
        printf("%s ",p);
        free(p);
    }
}
