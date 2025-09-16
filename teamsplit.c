#include<stdio.h>
int main(){
int n,nt,nf,lo;
scanf("%d %d",&n,&nt);
  //n=totalfriends,nt=noofteamstobeformed,nf=nooffriendsineachteam,leftoutfriends
nf=(n/nt);
lo=(n%nt);
printf("%d %d",nf,lo);}
