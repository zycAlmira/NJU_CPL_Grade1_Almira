//
// Created by 61760 on 24-10-21.
//
#include <stdio.h>
#include <math.h>
int main(void) {
    int n,c=0,b[2570]={0},max=0,maxx=0;
    char a[100000],d[257];
    scanf("%d",&n);
    for(int i=1;i<=255;i++){
        d[i]=i;
    }
    for(int i=1;i<=n;i++){
        scanf(" %c",&a[i]);
        b[a[i]]=b[a[i]]+1;
    }
    for(int i=1;i<=255;i++){
        max=(max>b[i])?max:b[i];
    }
    for(int i=1;i<=90;i++){
        if(b[i]>=1){
            maxx=i;
        }
    }
    for(int j=max+2;j>0;j--){
        for(int i=65;i<=90;i++)
        {
            if(j>2)
            {
                if(b[i]>0||(b[i+32]>0))
                {
                    if (b[i + 32] +3- j >0&&(b[i+32]>0)) {
                        printf("=");
                    } else if(b[i + 32] +3- j <=0&&(b[i+32]>0)){
                        printf(" ");
                    }
                    if(b[i]+3-j>0&&b[i]>0){
                        printf("=");
                    }else if(b[i]+3-j<=0&&b[i]>0){
                        printf(" ");
                    }
                    printf(" ");
                }

            }
            if(j==2){ if(b[i]>0||(b[i+32]>0))
                {
                    if (b[i + 32] +3- j >0&&(b[i+32]>0)) {
                        printf("-");
                    } else if(b[i + 32] +3- j <=0&&(b[i+32]>0)){
                        printf("-");
                    }
                    if(b[i]+3-j>0&&b[i]>0){
                        printf("-");
                    }else if(b[i]+3-j<=0&&b[i]>0){
                        printf("-");
                    }
                    if(i<maxx-1){
                        printf("-");}
                }

            }
            if(j==1){
                if(b[i]>0||(b[i+32]>0)){
                    if(b[i+32]>0){
                        printf("%c",d[i+32]);
                    }
                    if(b[i]>0){
                        printf("%c",d[i]);
                    }
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}