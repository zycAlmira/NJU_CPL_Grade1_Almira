//
// Created by 61760 on 24-11-2.
//
#include <stdio.h>
int max(int a,int b){
    return (a>b)?a:b;
}
int main(void){
    int p,q,r;
    int rg,rs,pg,ps,qg,qs;
    scanf("%d%d%d",&p,&q,&r);
    rg=r%10;
    rs=r/10;
    pg=p%10;
    ps=p/10;
    qg=q%10;
    qs=q/10;
    for(int i=max(max(max(pg,qg), max(ps,qs)),max(rg,rs))+1;i<=40;i++){
        if((pg+ps*i)*(qg+qs*i)==rg+rs*i){
            printf("%d",i);
            break;
        }else if(i==40&&((pg+ps*i)*(qg+qs*i)!=rg+rs*i)){
            printf("0");
            break;
        }
    }
    return 0;
}
