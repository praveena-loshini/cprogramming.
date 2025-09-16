#include<stdio.h>
int main(){
float p,r,y,i,a,d,f; //f-final amount p-principal r-rate of interest d-discount i-interest a-amount
scanf("%f %f %f",&p,&r,&y);
i=p*(r/100)*y;
a=i+p;
d=(i*2)/100;
f=a-d;printf("%.2f %.2f %.2f %.2f",i,a,d,f);
}
