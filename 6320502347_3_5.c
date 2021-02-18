#include<stdio.h>
int main(){
int n,i,num[3],y,x=0;
scanf("%d",&n);
if(n>=0&&n<=10000){
    y=n;
    while(1){
        for(i=2;i<=y;i++){
            if(y%i==0){
                y/=i;
                x++;
                num[x-1]=i;
                break;
                }
            }
        if(x>3) break;
        if(i>y) break;
            }
        if(x==3){
            if(num[0]!=num[1]&&num[0]!=num[2]&&num[1]!=num[2])
                printf("%d is a Lucky Number.",n);
            else printf("%d is not a Lucky Number.",n);
            }
        else printf("%d is not a Lucky Number.",n);
        }
    }
