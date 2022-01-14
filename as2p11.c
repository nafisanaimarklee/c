#include<stdio.h>
int main(){
int n,i,sum=0;
printf("Enter the value of N= ");
scanf("%d",&n);
if (n>0){
    for(i=1;i<=n;i++){
        sum+=i;
    }
}
else if(n<=1){
    for(i=1;i>=n;i--){
        sum+=i;
    }
}
printf("sum of integers between 1 and N=%d\n",sum);
return 0;
}
