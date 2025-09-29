#include <stdio.h>

int main() {
 int a[3];
 for(int i=0;i<3;i++){
     scanf("%d",&a[i]);
 }
 for(int i=0;i<3;i++){
     int count=0;
     for(int j=0;j<3;j++){
         if(a[i]==a[j]){
             count=count+1;
             
         }}
     if(count==1){
             printf("%d ",a[i]);
         }
     }
 
}
