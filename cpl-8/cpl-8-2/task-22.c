#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void link(char*,char*,int,int,int);
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char *p,*q;
        int dp,dq,size;
        char str[2050];
        scanf("%s",str);
        const char s[2] = ";";
        p = strtok(str, s);
        q = strtok(NULL, s);
        dp=atoi(strtok(NULL, s));
        dq=atoi(strtok(NULL, s));
        size=atoi(strtok(NULL, s));
        link(p,q,dp,dq,size);
        printf("\n");
    }
    return 0;
}
void link(char *s,char *t,int ds,int dt,int size){
    int p=ds,q=dt;
    for(int i=0;i<size-1;i++){
        if(*t=='\0'){
            dt=0;
            q=0;
            if(p==0){
                p=ds;
            }
        }
        if(*s=='\0'){
            ds=0;
            p=0;
            if(q==0){
                q=dt;
            }
        }
        if(p!=0){
            printf("%c",*s);
            s++;
            p--;
            if(p==0){
                q=dt;
            }
        }else if(q!=0){
            printf("%c",*t);
            t++;
            q--;
            if(q==0){
                p=ds;
            }}
        if(*s=='\0'&&*t=='\0'){
            return;
        }
    }
    return;
}
