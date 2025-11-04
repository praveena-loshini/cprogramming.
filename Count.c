#include<stdio.h>

int main(){
int a[]={1,2,3,3,4,5};
//int b[]={14,5,0};
//int c[6];
for(int i=0;i<6;i++){
int count=0;
for(int j=0;j<6;j++){
if(a[i]==a[j]){
    count++;
}}
printf("%d=%dtimes",a[i],count);
}
}
