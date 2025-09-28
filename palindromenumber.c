#include<stdio.h>
int main(){
    int n,num=0;
    scanf("%d",&n);
    int number=n;
    while(number>0){
        int temp=number%10;
        num=(num*10)+temp;
        number/=10;
        
    }
    if(num==n){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
