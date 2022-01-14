#include<stdio.h>
#define MAX 50
int  main(void)
{
int n,i,j=0;
int res[MAX];
printf("enter n: ");
scanf("%d",&n);
if (n<10)
{
    printf("%d", n);
    return 0;
}
for (i=9;i>1;i--)
{
    while(n%i==0)
{n=n/i;
res [j]=i;
j++;
}
}
for (i=j-1;i>=0;i--)
    printf("%d", res[i]);
}
