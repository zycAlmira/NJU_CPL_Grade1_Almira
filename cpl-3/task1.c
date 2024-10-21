//
// Created by 61760 on 24-10-14.
//
#include <stdio.h>
#include <math.h>
int main(void) {
    int n,e=0;
    char a[100000],b[100000];
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%c",&a[i]);
    }
    for(int i=1;i<=(n+1)/2;i++){
        int j=n+1-i;
        if(a[i]==63&&a[j]==63){
            b[i]=1;
            b[j]=1;
            e++;
        }
        if(a[i]==63&&a[j]!=63){#
            a[i]=a[j];
        }
        if(a[i]!=63&&a[j]==63){
            a[j]=a[i];
        }
    }
    for(int i=1;i<=n;i++){
        if( b[i]==1&&i<=(n+1)/2)
            printf("%c",a[i]);
        }

    }
    return 0;
}