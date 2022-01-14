#include<stdio.h>
int main(){
int seconds,minutes,hours,sec;
printf("enter second value: ");
scanf("%d", &sec);
hours=sec/3600;
minutes=(sec%3600)/60;
seconds=sec%60;
printf("calcuated time=%d:%d:%d\n",hours,minutes,seconds);
return 0;
}
