#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
char str[1000000000]={'\0'};
const char *re[1024]= { "const", "int", "float", "double", "long", "static", "void", "char", "extern", "return", "break", "enum", "struct", "typedef", "union", "goto" };
const char *out[1024]={"reserved","integer","float","operator","variable","Compile Error"};
const char *op[1024]={"=","+","-","*","/","<",">","<=",">=","==","!="};
void process(char *);
bool isreserved(char *);
bool isoperator(char *);
bool isinteger(char *);
bool isfloat(char *);
bool isvariable(char *);
int main(){
    char *s=(char*)malloc(8092*sizeof (char));
    int x=0;
    while (scanf("%s", s) != EOF) {
        x=1;
        if(*s==';'&&strlen(s)==1){
            sprintf(str+strlen(str),"\n");
            x=0;
            continue;
        }
        for (char *pos = strchr(s, ';');pos;s=(pos+1),pos = strchr(s, ';'),x=0) {
            if(*s==';'&&strlen(s)==1){
                sprintf(str+strlen(str),"\n");
                continue;
            }
            *pos = '\0';
            x=1;
            process(s);
            sprintf(str+strlen(str),"\n");
        }
        process(s);
    }
    if(strchr(s, ';')==NULL&&x==1||((*s)!='\0')&&(*s)!=';'){
        printf("Compile Error");
        exit(0);
    }
    printf("%s",str);
    return 0;
}
void process(char *s){
    if(*s=='.'&&strlen(s)==1){
        printf("Compile Error");
        exit(0);
    }
    if(*s=='-'&&strlen(s)>1){
        printf("Compile Error");
        exit(0);
    }
    if(*s!='\0'){
        if(isreserved(s)){
            return;
        }else if(isinteger(s)){
            return;
        }else if(isfloat(s)){
            return;
        }else if(isvariable(s)){
            return;
        }else if(isoperator(s)){
            return;
        }
    }}
bool isreserved(char *s){
    for (int i = 0; i < 16; i++) {
        if (strcmp(s, re[i]) == 0) {
            sprintf(str+strlen(str),"%s ",out[0]);
            return true;
        }
    }
    return false;
}
bool isoperator(char *s){
    for (int i = 0; i < 11; i++) {
        if (strcmp(s, op[i]) == 0) {
            sprintf(str+strlen(str),"%s ",out[3]);
            return true;
        }
    }
    printf("Compile Error");
    exit(0);
}
bool isinteger(char *s){
    for(int i=0;i<strlen(s);i++){
        if(i>0&&(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]=='_')){
            printf("Compile Error");
            exit(0);
        }
        if(s[i]<'0'||s[i]>'9'){
            return false;
        }
    }
    sprintf(str+strlen(str),"%s ",out[1]);
    return true;
}
bool isfloat(char *s){
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]<'0'||s[i]>'9'){
            if(s[i]=='.'){
                count++;
            }else{
                return false;
            }
            if(count>1){
                printf("Compile Error");
                exit(0);
            }
        }
    }
    if(count==1){
        sprintf(str+strlen(str),"%s ",out[2]);
        return true;
    }
    return false;
}
bool isvariable(char *s){
    if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_'){
        for(int i=1;i<strlen(s);i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]=='_'||s[i]>='0'&&s[i]<='9'){
                continue;
            }else{
                return false;
            }
        }
        sprintf(str+strlen(str),"%s ",out[4]);
        return true;
    }
    return false;
}