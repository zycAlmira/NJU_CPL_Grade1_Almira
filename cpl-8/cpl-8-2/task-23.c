#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool is(char ,char*);
int main(){
    char s[135],t[1035],no[135]={'\0'},sp[135]={'\0'},x[1035],str[1035]={'\0'};
    int n=0,m=0;
    scanf("%s",s);
    scanf("%s",t);
    printf("%s",t);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==':'){
            sp[n]=s[i-1];
            n++;
            m--;
        }else{
            no[m]=s[i];
            m++;
        }
    }
    while(scanf("%s",t)!=EOF){
        if(*t=='-'){
            if(is(t[1],sp)){
                if(scanf("%s",x)!=EOF){
                    sprintf(str+strlen(str), "\n%c=%s", t[1],x);
                }else{
                    printf(": option requires an argument -- '%c'",t[1]);
                    return 0;
                }
            }else if(is(t[1],no)){
                sprintf(str+strlen(str),"\n%c",t[1]);
            }else{
                printf(": invalid option -- '%c'",t[1]);
                return 0;
            }
        }

    }
    printf("%s",str);
    return 0;
}
bool is(char t,char *s){
    for(int i=0;i<strlen(s);i++){
        if(t==s[i]){
            return true;
        }
    }
    return false;
}
