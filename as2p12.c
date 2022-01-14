#include<stdio.h>
int main (){
int mark1,mark2,mark3,mark4;
double average;
printf("Enter marks: ");
scanf("%d%d%d%d", &mark1,&mark2,&mark3,&mark4);
average=(mark1+mark2+mark3+mark4)/4;
if(average<=3){
   printf("no");
}
   else if (average<4){
    printf("satisfactory marks,no scholarship");
   }
     else if (average=4 & average<4.5){
    printf("good marks");
     }
    else if (average==4.5 & average<5.0){
    printf("high scholarship");
}
else if (average=5){
    printf("excellent mark with personal scholarship");
}
else {
    printf("thanks");
}
 return 0;
}
