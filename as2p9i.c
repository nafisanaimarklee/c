#include<stdio.h>
void main (){
int i,n,sum=0;
printf("enter the value of n= ");
scanf("%d",&n);
for (i=1;i<=n;i+=2)
sum+=i*i;
printf("1^2+3^2+5^2+....+(2n+1)^2= %d",sum);
return 0;
}
