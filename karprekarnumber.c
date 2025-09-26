#include <stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    int square=n*n;
    int digits=0;
    int temp=n;
    while(temp>0){
        digits++;
        temp/=10;
    }
    int denominator=pow(10,digits);
    int right=square%denominator;
    int left=square/denominator;
    printf("%d %d",left,right);
    int sum=left+right;
    if(sum==n){
        printf("\nkarprekar number");
        
    }else{
         printf(" not a karprekar number");
    }}
