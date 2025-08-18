#include<stdio.h>
int main(){
    int y,m,days;//y-year,m-month
    scanf("%d%d",m,y;
    if(m==1||m==3||m==5||m== 7 ||m==8||m== 10||m==12){
        days=31;
    }else if(m==2||m==4||m==6||m==9||m==11){
        days=30;
    }else{
        if(y%4==0||y%400==0&&y%100!=0){
            days=29;
        }else{
            days=28;
        }
    }printf("%d",days);
}