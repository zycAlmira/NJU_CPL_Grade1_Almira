#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
const char *re[1024]= { "const", "int", "float", "double", "long", "static", "void", "char", "extern", "return", "break", "enum", "struct", "typedef", "union", "goto" };
const char *out[1024]={"reserved","integer","float","operator","variable","Compile Error"};
const char *op[1024]={"=","+","-","*","/","<",">","<=",">=","==","!="};
void process(char *,char *);
bool isreserved(char *,char *);
bool isoperator(char *,char *);
bool isinteger(char *,char *);
bool isfloat(char *,char *);
bool isvariable(char *,char *);
int main(){
    char s[8192]={'\0'},str[CHAR_MAX]={'\0'},*token;
    while (scanf("%s", s) != EOF) {
        char *position = strchr(s, ';');
        if (position == NULL) {
            process(s, str);
        }else{
            token=strtok(s, ";");
            if (token==NULL){
                sprintf(str+strlen(str),"\n");
            }
            while (token!= NULL)
            {
                process(token,str);
                token = strtok(NULL, s);
                if (token!= NULL){
                sprintf(str+strlen(str),"\n");}
            }
        }
    }
    printf("%s",str);
    return 0;
}
void process(char *s,char *str){
    if(s!=NULL){
        if(isreserved(s,str)){
            return;
        }else if(isoperator(s,str)){
            return;
        }else if(isinteger(s,str)){
            return;
        }else if(isfloat(s,str)){
            return;
        }else if(isvariable(s,str)){
            return;}
}}
bool isreserved(char *s,char *str){
    for (int i = 0; i < 16; i++) {
        if (strcmp(s, re[i]) == 0) {
            sprintf(str+strlen(str),"%s ",out[0]);
            return true;
        }
    }
    return false;
}
bool isoperator(char *s,char *str){
    for (int i = 0; i < 11; i++) {
        if (strcmp(s, op[i]) == 0) {
            sprintf(str+strlen(str),"%s ",out[3]);
            return true;
        }
    }
    return false;
}
bool isinteger(char *s,char *str){
    for(int i=0;i<strlen(s);i++){
        if(s[i]<'0'||s[i]>'9'){
            return false;
        }
    }
    sprintf(str+strlen(str),"%s ",out[1]);
    return true;
}
bool isfloat(char *s,char *str){
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]<'0'||s[i]>'9'){
            if(s[i]=='.'){
                count++;
            }else{
                return false;
            }
        }
    }
    if(count==1){
        sprintf(str+strlen(str),"%s ",out[2]);
        return true;
    }
    return false;
}
bool isvariable(char *s,char *str){
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




