#include <stdio.h>
#include <math.h>
int main (){
int x1,x2,y1,y2,sdistance;
printf("Enter points of X axis: ");
scanf("%d%d", &x1,&x2);
printf("Enter oints of Y axis: ");
scanf("%d%d", &y1,&y2);
sdistance=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
printf("distance between two points: %f\n",sqrt(sdistance));
return 0;
}
