#include<stdio.h>

int main(){
int a[]={7,2,3,4,5};
int b[5],c[5];
int max=a[0],min=a[0];
int c1=0,c2=0;
for(int i=0;i<5;i++){
    
    if(a[i]%2==0){
     b[c1]=a[i];
     c1++;}
else{
    c[c2]=a[i];
    c2++;
    }
}
for(int i=0;i<c1;i++){
    printf("%d,",b[i]);
}printf("\n");
for(int i=0;i<c2;i++){
    printf("%d,",c[i]);
}
}

