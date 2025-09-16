#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int greatest;
greatest=(a>b&&a>c)?a:((b>c)?b:c);
printf("%d",greatest);
}
