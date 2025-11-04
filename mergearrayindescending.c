#include<stdio.h>
void merge(int[]);
int main(){
int a[]={1,2,3};
int b[]={14,5,0};
int c[6];
for(int i=0;i<3;i++){
c[i]=a[i];
}
int i=0;
for(int j=0;j<3;j++){
c[3+i]=b[j];
i++;
} 
//for(int i=0;i<6;i++){
//printf("%d\n",c[i]);
//}
merge(c);}
void merge(int a[]){
for(int i=0;i<6;i++){
for(int j=i+1;j<6;j++){
if(a[i]<a[j]){
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}}
for(int i=0;i<6;i++){
printf("%d\n",a[i]);
}
}
