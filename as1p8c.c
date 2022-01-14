#include<stdio.h>
int main(){
float gp1,gp2,gp3,gp4,gp5,GPA;
printf("Enter the grade points: ");
scanf("%f%f%f%f%f",&gp1,&gp2,&gp3,&gp4,&gp5);
GPA=(gp1+gp2+gp3+gp4+gp5)/5;
printf("GPA=%f",GPA);
return 0;
}
