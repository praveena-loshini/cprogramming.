#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >='a' && ch<='z'){
        printf("This is a lower case alphabet");}
    else if(ch>='A' && ch<='Z'){
        print(" This is a upper case alphabet");}
    else if( ch>='0' && ch <='9'){
        printf("This is a digit");
    }
    else{
        printf("This is an special alphabet")
    }}