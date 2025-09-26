#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
  int gcd;
int max=(a>b &&a>c)?a:((b>c)?b:c);
for(int i=1;i<=max;i++){
if(a%i==0&&b%i==0&&c%i==0){
    
gcd=i;

}
}
printf("%d",gcd);}
