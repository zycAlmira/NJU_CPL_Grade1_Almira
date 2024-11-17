//
// Created by 61760 on 24-11-10.
//
#include <stdio.h>
#include <math.h>
int main(void){
  int n,q,max,dot=1,name=0,space=0,room[10000][2]={0};
  char input;
  scanf("%d%d",&n,&q);
  max=pow(2,n);
  room[0][1]=max;
  getchar();
  for(int i=0;i<q;i++){
      scanf("%c",&input);
      switch(input){
          case 'Q':
              printf("%d\n",dot);
              for(int i=0;i<dot;i++){
                  printf("%d ",room[i][0]);
              }
              printf("\n");
              getchar();
              break;
          case 'A':
              scanf("%d",&name);
              scanf("%d",&space);
              for(int c=0;c<dot;c++){
                  if(room[c][0]!=0&&dot!=1){
                      continue;
                  }
                  if(space<=room[c][1]&&space>(room[c][1])/2){
                      room[c][0]=name;
                      room[c][1]=space;
                      break;
                  }else if(space<=(room[c][1])/2) {
                      dot++;
                      room[c][1]=room[c][1]/2;
                      for(int i=dot-1;i>c;i--) {
                          room[i][0]=room[i-1][0];
                          room[i][1]=room[i-1][1];
                      }
                      c=c-1;}
              }
              getchar();
              break;
      }
  }
  return 0;
}