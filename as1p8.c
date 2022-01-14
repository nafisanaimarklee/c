#include<stdio.h>
int main(){
float mark1,mark2,mark3,mark4,mark5,total,average,percentage;
printf("Enter marks: ");
scanf("%f%f%f%f%f", &mark1,&mark2,&mark3,&mark4,&mark5);
total=mark1+mark2+mark3+mark4+mark5;
printf("total marks=%f",total);
average=total/5;
printf("average marks=%f",average);
percentage=(total*100)/500;
printf("percentage of average=%f",percentage);
return 0;
}
