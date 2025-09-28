#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;

   for(int i=1;i<=n;){
       sum+=i;
       i=i+2;
   }
   printf("%d",sum);
}
