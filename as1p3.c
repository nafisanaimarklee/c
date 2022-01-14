#include<stdio.h>
int main(){
float first,second,temp;
printf("Enter the first number: ");
scanf("%f", &first);
printf("Enter the second number: ");
scanf("%f", &second);
temp=first;
first=second;
second=temp;
printf("after swapping first number is=%f\n",first);
printf("after swapping second number is=%f\n",second);
return 0;
}
