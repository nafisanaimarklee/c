#include<stdio.h>
int main(){
int n,sum,sum1=0,i,j;
printf("Enter the value of n: ");
scanf("%d",&n);
for (i=1;i<=n;i++){
sum=0;
for (j=1;j<=i;j++){
sum=sum+j;
}
sum1=sum1+sum;
}
printf("1+(1+2)+(1+2+3)+...+(1+2+3+....+n)[%d]=%d\n",n,sum1);
return 0;
}
