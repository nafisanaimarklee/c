#include<stdio.h>
#include<math.h>
int main(){
double a,b,c,determinant,root1,root2,realpart,imaginarypart;
printf("Enter coeffiecients of a,b,c: ");
scanf("%lf %lf %lf", &a, &b, &c);
determinant=(b*b)-(4*a*c);
if (determinant>0){
root1=-(-b+sqrt(determinant))/(2*a);
root2=(-b+sqrt(determinant))/(2*a);
printf("root1=%lf and root2=%lf",root1,root2);
}
else if (determinant==0){
root1=root2=-b/(2*a);
printf("root1=root2=%lf",root1);}
else{
realpart=-b/(2*a);
imaginarypart=sqrt(-determinant)/(2*a);
printf("root1=%lf+%lfi and root2=%lf-%lfi",realpart,imaginarypart,realpart,imaginarypart);
}
return 0;
}
