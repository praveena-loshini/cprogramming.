#include<stdio.h>
int main(){
    int n,sum=0,temp,digit=0;//here sum of the numbers is done again and again unitil it becomes a unit digit
    scanf("%d",&n);
    while(n>0){
        temp=n%10;
        sum+=temp;
        n=n/10;
    }while(sum>0){
        int n1=sum%10;
        digit+=n1;
        
        sum=sum/10;
        
    }
    printf("%d",digit);
}
