#include<stdio.h>
void main()
{
int num;
int i;
printf("enter a number");
scanf("%d",&num);
i=1;
while(i<=num)
{
if (i%2 == 0)
printf("%d",i);
i=i+1;
}
}
