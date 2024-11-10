//
// Created by 61760 on 24-11-9.
//
#include <stdio.h>
#include <string.h>

int main(void){
    int n,j=0,temp=0,l=0;
    char input[1000]={0},arr[10]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&input[0]);
        switch (input[0]) {
            case 'p':
                switch (input[1]) {
                    case 'u':for(int j=sizeof(arr);j>0;j--){
                        arr[j]=arr[j-1];
                    }
                        getchar();
                        arr[0]=getchar();
                        l++;
                        break;
                    case 'o':
                        if(arr[0]==0){
                            printf("Empty\n");
                            break;
                        }
                        for(int j=0;j<sizeof(arr);j++)
                        {arr[j]=arr[j+1];}
                        l--;
                        break;
                    case 'r':
                        if(arr[0]==0){
                            printf("Empty\n");
                            break;
                        }
                        for(int h=0;h<l;h++){
                            printf("| %c |\n",arr[h]);
                        }
                        printf("|===|");
                        break;
                }break;
            case 't':
                if(arr[0]==0){
                    printf("Empty\n");
                    break;
                }
                printf("%c\n",arr[0]);
                break;
        }
        memset(input,0,sizeof input);
    }
    return 0;
}