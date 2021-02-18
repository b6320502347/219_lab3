#include<stdio.h>
int main(){
int k,i;
scanf("%d",&k);
if(k>1&&k<=10000){
while(1){
    for(i=2;i<=k;i++){
        if(k%i==0){
            k/=i;
            printf("%d\n",i);
            break;
        }
    }
    if(i>k) break;
    }
printf("0");
}
else if(k==1)
    printf("1\n0");
}
