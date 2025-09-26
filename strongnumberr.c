#include<stdio.h> 
int fact(int n1);
int main(){
    int n;
    scanf("%d",&n);
    
    int temp=n,sum=0;
    while(temp>0){
        int digit=temp%10;
        sum+=fact(digit);
        temp=temp/10;
    }
    if(sum==n){
        printf("\nyes");
    }else{
        printf("\nno");
    }
}
int fact(int n1){
    if(n1==0||n1==1){
        return 1;
    }else{
        return n1*fact(n1-1);}
}
