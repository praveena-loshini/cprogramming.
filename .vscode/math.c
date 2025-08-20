#include <stdio.h>
#include<math.h>
int main() {
float a; 
scanf("%f",&a);
printf("%.2f %d %.2f",ceil(a),(int)a,floor(a));
}//Write a program to get a float value from the user and display it in the below-mentioned format. HINT: Use ceil() and floor() functions from the header file.   Input Format: Input consists of one float value.  Output Format: The output consists of one integer, its rounded-up value, and its rounded-down value. 