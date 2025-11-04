#include<stdio.h>
int main(){
int a[]={6,4,7,8,0};
for(int i=0;i<5;i++){
for(int j=i+1;j<5;j++){
if(a[j]<a[i]){
int temp=a[i];
a[i]=a[j];
a[j]=temp;}}}
for(int i=0;i<5;i++){
printf("%d ",a[i]);}}
