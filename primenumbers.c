#include<stdio.h> 
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int isprime=1;
        for(int j=2;j<(i/2);j++){
            if(i%j==0){
                isprime=0;
                break;
            }}
            if(isprime==1){
                printf("%d ",i);
            }
        
    }
}
