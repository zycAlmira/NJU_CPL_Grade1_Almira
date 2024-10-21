#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    int n = 0;
    scanf("%d", &n);
    while (n--) {
        char ter[2000]="";
        int ten=0;
        bool flag= true;
        scanf("%s", ter);
        int len = (int) strlen(ter);
        int dec = 0;
        if(ter[0]==45){
            for (int i = 1; i < len; i++) {
                if (ter[i] > '9') {
                    flag = false;
                    break;
                }
                ten*=10;
                ten+=ter[i]-48;
            }
            char result[2100]={0};
            for(int b=1;b<=25;b++){
                result[b]+=ten%3+48;
                ten=ten/3;
                if(result[b]==50){
                    result[b]='Z';
                    result[b+1]++;
                }else if(result[b]==51){
                    result[b]=48;
                    result[b+1]++;
                }
            }
            int b=25,length=25;
            while(result[b]==48){
                b-=1;
                length-=1;
            }
            for(int b=0;b<=25;b++){
                if(result[b]==49){
                    result[b]='Z';
                }else if(result[b]=='Z'){
                    result[b]=49;
                }
            }
            if(flag ==false){
                printf("Radix Error\n");
            }
            else{ for(int i=length;i>0;i--){
                    printf("%c",result[i]);
                }
                printf("\n");
            }
        }else if(ter[0]>=49){
            for (int i = 0; i < len; i++) {
                if (ter[i] > '9') {
                    flag = false;
                    break;
                }
                ten*=10;
                ten+=ter[i]-48;
            }
            char result[2100]={0};
            for(int b=1;b<=25;b++){
                result[b]+=ten%3+48;
                ten=ten/3;
                if(result[b]==50){
                    result[b]='Z';
                    result[b+1]++;
                }else if(result[b]==51){
                    result[b]=48;
                    result[b+1]++;
                }
            }
            int b=25,length=25;
            while(result[b]==48){
                b-=1;
                length-=1;
            }
            if(flag ==false){
                printf("Radix Error\n");
            }
            else{ for(int i=length;i>0;i--){
                    printf("%c",result[i]);
                }
                printf("\n");
            }
        }else if(ter[0]==48){
            printf("0\n");
        }
    }
    return 0;
}