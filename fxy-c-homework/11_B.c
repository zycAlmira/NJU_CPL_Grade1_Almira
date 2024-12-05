//
// Created by 61760 on 24-12-5.
//
#include <stdio.h>
#include <stdlib.h>
void  line_sort(int a[ ][4],int b[ ],int n);
int main() {
    int a[5][4],b[8];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    line_sort(a,b,5);
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("sum\n");
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
void line_sort(int a[][4],int b[ ],int n){
    for(int i=0;i<5;i++){
        b[i]=a[i][0]+a[i][1]+a[i][2]+a[i][3];}
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(b[i]>b[j]){
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
                for(int k=0;k<4;k++){
                    int temp=a[i][k];
                    a[i][k]=a[j][k];
                    a[j][k]=temp;
                }
            }
        }
}}
