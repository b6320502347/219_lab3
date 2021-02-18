#include<stdio.h>
int main(){
int x,i,y,n=0,j;
scanf("%d",&x);
    for(i=0;;i++){
        y=x-i;
         for(n=0,j=2;j<y;j++)
            if(y%j==0){
                n++;
            break;
            }
        if(n==0){
            printf("%d",y);
            break;
            }
        y=x+i;
           for(n=0,j=2;j<y;j++)
                if(y%j==0){
                    n++;
                break;
                }
        if(n==0){
            printf("%d",y);
            break;
            }
    }
}
