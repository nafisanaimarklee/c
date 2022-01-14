#include<stdio.h>
int main(){
float celsius,fahrenheit;
printf("Enter temperature in fahrenheit: ");
scanf("%d",&fahrenheit);
celsius=(5*(fahrenheit-32))/9;
printf("temperature in celsius=%f\n",celsius);
return 0;
}
