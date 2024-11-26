#include <stdio.h>
#include <malloc.h>
#include <string.h>
void turn(char *s,int len,char *new);
int main(){
    int n,len=0;
    scanf("%d",&n);
    char *s=(char *)malloc(1015*sizeof(char)),*new=(char *)malloc(1015*sizeof(char));
    memset(s,'.',3*sizeof(char));
    scanf("%s",s+3);
    len=strlen(s);
    strncpy(new,s,len+3);
    for(int i=0;i<n;i++){
        turn(s,len,new);
        strncpy(s,new,len+3);
    }
    for(int i=0;i<len-3;i++)
        printf("%c",*(new+3+i));
    return 0;
}
void turn(char *s,int len,char *new){
    int na=0,nb=0;
    for(int i=3;i<len;i++){
        na=(*(s+i+1)=='A')+(*(s+i+2)=='A')+(*(s+i+3)=='A')+(*(s+i-1)=='A')+(*(s+i-2)=='A')+(*(s+i-3)=='A');
        nb=(*(s+i+1)=='B')+(*(s+i+2)=='B')+(*(s+i+3)=='B')+(*(s+i-1)=='B')+(*(s+i-2)=='B')+(*(s+i-3)=='B');
        switch(*(s+i)){
            case 'A':
                if(nb>0){
                    *(new+i)='.';}
                else if(na>=5||na<=1){
                    *(new+i)='.';}
                else{new[i]='A';}
                break;
            case 'B':
                if(na>0){
                    *(new+i)='.';}
                else if(nb>=5||nb<=1){
                    *(new+i)='.';}
                else{new[i]='B';}
                break;
            case '.':
                if(2<=na&&na<=4&&nb==0)
                    *(new+i)='A';
                if(2<=nb&&nb<=4&&na==0)
                    *(new+i)='B';
                break;
        }}
}



