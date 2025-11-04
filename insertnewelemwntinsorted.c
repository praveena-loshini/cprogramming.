#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    int temp;
    int c;

    for(int i=0;i<n;i++){             // corrected n+1 → n (to avoid garbage access)
        if(a[i]>b){
            temp=i+1;
            c=i;
            a[i]=b;
            break;
        }
        if(i==n-1){                   // handle if b is largest
            temp=n;
            c=n-1;
        }
    }

    for(int j=temp;j<n+1;j++){
        a[j]=a[c];
        c++;
        if(c==n){                     // corrected n+1 → n
            break;
        }
    }

    for(int j=0;j<n+1;j++){
        printf("%d ",a[j]);
    }
}
