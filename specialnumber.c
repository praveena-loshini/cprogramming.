#include<stdio.h> 
int main(){
    int m,n,sum=0,product=1;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
     sum=(i%10)+(i/10);
     product=(i%10)*(i/10);
     int number=sum+product;
     if(i==number){
         printf("\n%d",i);
     
     }
     
}}
