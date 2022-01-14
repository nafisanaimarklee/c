#include<stdio.h>
int main(){
int radius;
float volume,area,perimeter;
printf("Enter radius: ");
scanf("%d", &radius);
volume=(4*3.14*radius*radius*radius)/3;
printf("volume of the circle is=%f\n",volume);
area=3.14*radius*radius;
printf("area of the circle=%f\n",area);
perimeter=2*3.14*radius;
printf("perimeter of the circle=%f\n",perimeter);
return 0;
}
