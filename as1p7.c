#include<stdio.h>
int main(){
float celsius,fahrenheit;
printf("Enter temperature in celsius: ");
scanf("%d",&celsius);
fahrenheit=((9*celsius)/5)+32;
printf("temperature in fahrenheit=%f\n",fahrenheit);
return 0;
}
