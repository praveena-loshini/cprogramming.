#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int total=n*(n+1);
    int left=1;
    int right=total;
    for(int i=0;i<n;i++){
        for(int s=0;s<i;s++){
            printf("  ");
        }
        for(int j=0;j<n-i;j++){
            printf("%d*",left++);
        }
        for(int j=0;j<n-i;j++){
            printf("%d",right--);
            if(j!=n-i-1){
                printf("*");
            }
    
        }
        printf("\n");
    }
}
