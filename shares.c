#include<stdio.h>
int main(){
int n,ben,black,benshare,blackshare,three_pirate_share;//n=number of gold coins,ben=ben share percentage,black=black share percentage
scanf("%d %d %d",&n,&ben,&black);
benshare=(n*ben)/100;
blackshare=((n-benshare)*black)/100;
three_pirate_share=(n-benshare-blackshare)/3;
printf("%d %d %d",benshare,blackshare,three_pirate_share);}
