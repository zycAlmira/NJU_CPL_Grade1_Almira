#include <stdio.h>
int main(void){
    int result[100]={0},i=0;
    char sign[10]={0};
    while(scanf("%c")!= EOF){
        int c,b;
        i=i+1;
        scanf("%d%c%d",&c,&sign[i],&b);
        if(sign[1]=='+'){
            result[1]=2;
        }

    }
    for(int j=1;j<=i;j++){
        printf("%d",result[1]);
    }
    return 0;
}