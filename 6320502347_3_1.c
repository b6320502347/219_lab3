#include<stdio.h>
int main(){
int score[5][4],sum[5]={0,0,0,0,0},person,max;
for(int i=0;i<5;i++)
    for(int j=0;j<4;j++){
        scanf("%d",&score[i][j]);
        sum[i]=sum[i]+score[i][j];
        }
for(int i=1;i<5;i++){
    if(i==1){
        person=1;
        max=sum[i-1];
        }
    if(sum[i]>max){
        person=i+1;
        max=sum[i];
        }
    }
printf("%d %d",person,max);
}
