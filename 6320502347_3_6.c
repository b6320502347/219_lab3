#include<stdio.h>
int main(){
int n,x,i;
scanf("%d",&n);
for(x=n,i=0;x>0;x/=10,i++);
printf("%d",i);
}
