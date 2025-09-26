#include<stdio.h>
int main(){//series 0,2,8,14,24,34,48,.....
    int n;
    scanf("%d",&n);
    int term=0,diff=2;
    for(int i=0;i<n;i++){
        printf("%d ",term);
        term+=diff;
        if(i%2==0){
            diff+=4;
        }
    }
}
