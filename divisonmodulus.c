#include<stdio.h>
int main()
{
int  d1,c1,d2,c2,dollars,cents;//d-dollars c=cents
scanf("%d %d %d %d",&d1,&c1,&d2,&c2);

dollars=d1+d2+((c1+c2)/100);
cents=(c1+c2)%100;
printf("%d %d",dollars,cents);}
