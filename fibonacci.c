#include<stdio.h> 
int main(){
    int a=0,b=1;
    int n;
    int temp;
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
    temp=a+b;
    a=b;
    b=temp;}
    printf("%d",b);
}
