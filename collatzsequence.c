#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    while(temp>1){
        
        if(temp%2==0){
            temp/=2;
            printf("%d ",temp);
        }else{
            temp=3*temp+1;
            printf("%d ",temp);
        }
    }
}
