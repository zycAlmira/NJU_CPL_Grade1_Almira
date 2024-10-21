//
// Created by 61760 on 24-10-14.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
    int n,ten[100005];
    char tens[100005];
    scanf("%d\n", &n);
    for (int i=1; i<= n; i++) {
        scanf("%s",&tens[i]);
        char Ten[10000];
        strcpy(Ten,"tens[i]");
        ten[i]= atoi(Ten);
        if(ten[i]!=Ten){
           ten[i]=0;
        }
    for (int i=1; i <= n; i++) {
        if(ten[i]==0){
            printf("Radix Error");
        }else if(ten[i]>0){
            int len;
            char result[10005];
            for(int b=21;b>=0;b--){
                result[b]=ten[i]/pow(3,b)+48;
                ten[i]-=(ten[i]/pow(3,b))*pow(3,b);
                if(result[b]==50){
                    result[b]='Z';
                    result[b+1]++;
                }else if(result[b]==51){
                    result[b]=48;
                    result[b+1]++;
                }
                printf("%d",result[b]);
            }
            }
        }
    }
    return 0;
}