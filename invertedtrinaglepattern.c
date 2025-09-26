#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++){
    for(int j=i-1;j<=n;j++){
        printf("*");
    }
    printf("\n");
    }
}
